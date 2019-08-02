/** @file
 * Copyright (c) 2019, Arm Limited or ps affiliates. All rights reserved.
 * SPDX-License-Identifier : Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/
#ifndef _TEST_S006_PS_DATA_TESTS_H_
#define _TEST_S006_PS_DATA_TESTS_H_

#include "val_protected_storage.h"

#define SST_FUNCTION            val->ps_function

typedef struct {
    enum ps_function_code  api;
    psa_status_t        status;
} test_data;

static struct psa_storage_info_t info;
static const test_data s006_data[] = {
{
 0, PSA_ERROR_NOT_SUPPORTED /* This is dummy for index0 */
},
{
 VAL_PS_SET, PSA_SUCCESS /* Create a valid storage entity with different flag values */
},
{
 VAL_PS_GET_INFO, PSA_SUCCESS /* Validate the flag value get_info API */
},
{
 0, 0 /* Index not used */
},
{
 VAL_PS_REMOVE, PSA_SUCCESS /* Remove the storage entity */
},
{
 VAL_PS_REMOVE, PSA_ERROR_DOES_NOT_EXIST /* Remove the storage entity */
}
};
#endif /* _TEST_S006_PS_DATA_TESTS_H_ */
