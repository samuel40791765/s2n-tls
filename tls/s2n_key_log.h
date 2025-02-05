/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once

#include "api/s2n.h"
#include "stuffer/s2n_stuffer.h"
#include "tls/s2n_quic_support.h"
#include "utils/s2n_blob.h"
#include "utils/s2n_safety.h"

S2N_RESULT s2n_key_log_hex_encode(struct s2n_stuffer *output, uint8_t *bytes, size_t len);
S2N_RESULT s2n_key_log_tls12_secret(struct s2n_connection *conn);
S2N_RESULT s2n_key_log_tls13_secret(struct s2n_connection *conn, struct s2n_blob *secret, s2n_secret_type_t secret_type);

