// BluetoothDxe.c
#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
BluetoothDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  ) {
  Print(L"BluetoothDxe Driver Loaded!\n");
  return EFI_SUCCESS;
}

