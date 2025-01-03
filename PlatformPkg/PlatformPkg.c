// PlatformPkg.c
// Placeholder source file for PlatformPkg

#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"Hello from PlatformPkg!\n");
  return EFI_SUCCESS;
}
