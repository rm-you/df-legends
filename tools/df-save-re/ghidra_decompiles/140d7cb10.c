// FUN_140d7cb10 @ 140d7cb10
// callees:
//   -> 140d89d60 FUN_140d89d60


longlong FUN_140d7cb10(undefined8 param_1,undefined2 param_2,undefined4 param_3,ushort param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint7 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  lVar1 = FUN_140d89d60();
  uVar6 = 0xea61;
  if (lVar1 == 0) {
    uVar7 = 0xea61;
  }
  else {
    uVar7 = *(ushort *)(lVar1 + 0x86);
  }
  lVar1 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar1 == 0) {
    uVar4 = 0xea61;
  }
  else {
    uVar4 = *(ushort *)(lVar1 + 0x82);
  }
  lVar1 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar1 == 0) {
    uVar5 = 0xea61;
  }
  else {
    uVar5 = *(ushort *)(lVar1 + 0x88);
  }
  lVar1 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar1 != 0) {
    uVar6 = *(ushort *)(lVar1 + 0x8a);
  }
  lVar1 = FUN_140d89d60(param_1,param_2,param_3);
  if (lVar1 == 0) {
    uVar2 = 0xea61;
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(lVar1 + 0x84);
  }
  uVar3 = (uint7)(uVar2 >> 8);
  if ((((((uVar7 == 0xea61) || (param_4 < uVar7)) && ((uVar4 == 0xea61 || (param_4 < uVar4)))) &&
       ((uVar5 == 0xea61 || (param_4 < uVar5)))) && ((uVar6 == 0xea61 || (param_4 < uVar6)))) &&
     (((ushort)uVar2 == 0xea61 || ((ushort)uVar2 < param_4)))) {
    lVar1 = CONCAT71(uVar3,1);
  }
  else {
    lVar1 = (ulonglong)uVar3 << 8;
  }
  return lVar1;
}

