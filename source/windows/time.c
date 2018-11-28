/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */
#include <aws/common/time.h>

time_t aws_mk_gm_time(struct tm *const t) {
    return _mkgmtime(t);
}

void aws_local_time(time_t time, struct tm *t) {
    localtime_s(t, &time);
}

void aws_gm_time(time_t time, struct tm *t) {
    gmtime_s(t, &time);
}