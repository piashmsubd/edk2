// CoolingFanDxe.c
#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
CoolingFanDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"CoolingFanDxe Driver Loaded!\n");
  return EFI_SUCCESS;
}
