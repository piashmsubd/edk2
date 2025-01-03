// CoolingFanLib.c
// Placeholder source file for CoolingFanLib

#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
CoolingFanLibMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"Hello from CoolingFanLib!\n");
  return EFI_SUCCESS;
}
