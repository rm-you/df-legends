// FUN_140df51b0 @ 140df51b0
// callees:


uint FUN_140df51b0(uint param_1,uint *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  param_1 = ~param_1;
  for (; (uVar3 = (ulonglong)param_3, param_3 != 0 && (((ulonglong)param_2 & 3) != 0));
      param_2 = (uint *)((longlong)param_2 + 1)) {
    param_1 = *(uint *)(&DAT_140e7b070 + (ulonglong)(byte)((byte)*param_2 ^ (byte)param_1) * 4) ^
              param_1 >> 8;
    param_3 = param_3 - 1;
  }
  if (0x1f < param_3) {
    uVar1 = (ulonglong)(param_3 >> 5);
    do {
      param_1 = param_1 ^ *param_2;
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(param_1 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(param_1 & 0xff) * 4) ^ param_2[1];
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[2];
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[3];
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[4];
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[5];
      uVar3 = (ulonglong)((int)uVar3 - 0x20);
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[6];
      uVar2 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[7];
      param_2 = param_2 + 8;
      param_1 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
                *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                *(uint *)(&DAT_140e7b070 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                *(uint *)(&DAT_140e7bc70 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (3 < (uint)uVar3) {
    uVar1 = uVar3 >> 2;
    do {
      param_1 = param_1 ^ *param_2;
      uVar3 = (ulonglong)((int)uVar3 - 4);
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&DAT_140e7b470 + (ulonglong)(byte)(param_1 >> 0x10) * 4) ^
                *(uint *)(&DAT_140e7b870 + (ulonglong)(byte)(param_1 >> 8) * 4) ^
                *(uint *)(&DAT_140e7b070 + (ulonglong)(param_1 >> 0x18) * 4) ^
                *(uint *)(&DAT_140e7bc70 + (ulonglong)(param_1 & 0xff) * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  uVar2 = (uint)uVar3;
  while (uVar2 != 0) {
    uVar2 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    param_1 = *(uint *)(&DAT_140e7b070 + (ulonglong)(byte)((byte)uVar2 ^ (byte)param_1) * 4) ^
              param_1 >> 8;
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
  }
  return ~param_1;
}

