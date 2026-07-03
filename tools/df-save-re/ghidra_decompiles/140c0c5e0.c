// FUN_140c0c5e0 @ 140c0c5e0
// callees:
//   -> 1400026e0 FUN_1400026e0
//   -> 1401b7c10 FUN_1401b7c10


int * FUN_140c0c5e0(int *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1400026e0(param_1 + 2);
  piVar1 = param_1 + 0x2b;
  uVar3 = 0;
  lVar2 = 0xd;
  do {
    *piVar1 = 1000;
    piVar1[1] = 2000;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1 = piVar1 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_1401b7c10(param_1 + 0x92);
  param_1[0x22] = 1;
  param_1[0x20] = -1;
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x86) = 0xffff;
  *(undefined8 *)(param_1 + 0xf4) = uVar3;
  param_1[0x23] = -1;
  param_1[0x24] = -1;
  param_1[0x25] = -1;
  param_1[0x26] = -1;
  *(undefined8 *)(param_1 + 0x27) = uVar3;
  param_1[0x29] = -1;
  param_1[0x2a] = -1;
  if (param_2 == '\0') {
    *param_1 = DAT_14155b300;
    DAT_14155b300 = DAT_14155b300 + 1;
  }
  return param_1;
}

