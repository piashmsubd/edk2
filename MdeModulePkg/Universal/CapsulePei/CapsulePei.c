// CapsulePei.c
// Placeholder source file for CapsulePei

#include <Uefi.h>
#include <Library/PeiServicesTableLib.h>
#include <Library/BaseLib.h>

EFI_STATUS
EFIAPI
CapsulePeiEntryPoint (
  IN EFI_PEI_FILE_HANDLE FileHandle,
  IN CONST EFI_PEI_SERVICES **PeiServices
  ) {
  Print(L"Hello from CapsulePei!\n");
  return EFI_SUCCESS;
}
