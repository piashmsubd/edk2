// WifiDxe.c
#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
WifiDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"WifiDxe Driver Loaded!\n");
  return EFI_SUCCESS;
}
