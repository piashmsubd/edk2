// BaseLib.c
// Placeholder source file for BaseLib

#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
BaseLibMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"Hello from BaseLib!\n");
  return EFI_SUCCESS;
}
