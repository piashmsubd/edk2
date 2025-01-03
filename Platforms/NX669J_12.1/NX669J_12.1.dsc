[Defines]
  PLATFORM_NAME           = NX669J_12.1
  PLATFORM_GUID           = 8A21FE2B-EE05-4D4D-8A2F-70867A4ACD9A
  PLATFORM_VERSION        = 1.0
  DSC_SPECIFICATION       = 0x00010005
  OUTPUT_DIRECTORY        = Build/NX669J_12.1
  SUPPORTED_ARCHITECTURES = AARCH64
  BUILD_TARGETS           = DEBUG|RELEASE
  SKUID_IDENTIFIER        = DEFAULT

[LibraryClasses]
  BaseCryptLib|MdePkg/Library/BaseCryptLib/BaseCryptLib.inf
  BaseMemoryLib|MdePkg/Library/BaseMemoryLib/BaseMemoryLib.inf
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  CoolingFanLib|PlatformPkg/Library/CoolingFanLib/CoolingFanLib.inf
  BluetoothLib|PlatformPkg/Library/BluetoothLib/BluetoothLib.inf
  WifiLib|PlatformPkg/Library/WifiLib/WifiLib.inf

[Components]
  MdeModulePkg/Universal/CapsulePei/CapsulePei.inf
  ArmPlatformPkg/ArmPlatformPkg.dsc
  PlatformPkg/PlatformPkg.dsc
  PlatformPkg/Drivers/CoolingFanDxe/CoolingFanDxe.inf
  PlatformPkg/Drivers/BluetoothDxe/BluetoothDxe.inf
  PlatformPkg/Drivers/WifiDxe/WifiDxe.inf

[BuildOptions]
  GCC:*_*_CC_FLAGS         = -mfpu=neon -mfloat-abi=hard -march=armv8-a -mtune=cortex-a75
