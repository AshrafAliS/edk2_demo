/*++ @file
  PEIM to build GUIDed HOBs for platform specific flash map

Copyright (c) 2023, Intel Corporation. All rights reserved.<BR>
Portions copyright (c) 2011, Apple Inc. All rights reserved.
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "PiPei.h"

#include <Guid/SystemNvDataGuid.h>
#include <Ppi/EmuThunk.h>

#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>
#include <Library/HobLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/PeiServicesTablePointerLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/PcdLib.h>





EFI_STATUS
EFIAPI
PeimSampleInitialize (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
) {
    DEBUG ((DEBUG_INFO, "[BIOS] %a Called\n", __FUNCTION__));
    return EFI_SUCCESS;
}