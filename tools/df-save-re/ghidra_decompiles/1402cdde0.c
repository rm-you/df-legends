// FUN_1402cdde0 @ 1402cdde0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c460 FUN_14000c460
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402cdde0(undefined8 param_1,ulonglong *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined2 local_78 [4];
  undefined8 local_70;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_70 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  puVar1 = (undefined2 *)*param_2;
  param_2[1] = (ulonglong)puVar1;
  iVar3 = FUN_14000c110();
  if (iVar3 == 0) {
    local_78[0] = 0;
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 0;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"LIQUID");
  if (iVar3 == 0) {
    local_78[0] = 1;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 1;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,&DAT_140eb2b28);
  if (iVar3 == 0) {
    local_78[0] = 2;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 2;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"POWDER");
  if (iVar3 == 0) {
    local_78[0] = 3;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 3;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"SOLID_POWDER");
  if (iVar3 == 0) {
    local_78[0] = 3;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 3;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"PASTE");
  if (iVar3 == 0) {
    local_78[0] = 4;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 4;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"SOLID_PASTE");
  if (iVar3 == 0) {
    local_78[0] = 4;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 4;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"PRESSED");
  if (iVar3 == 0) {
    local_78[0] = 5;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 5;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"SOLID_PRESSED");
  if (iVar3 == 0) {
    local_78[0] = 5;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 5;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,"ALL_SOLID");
  if (iVar3 == 0) {
    local_78[0] = 0;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 0;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 3;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 3;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 4;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 4;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 5;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 5;
      }
    }
    param_2[1] = param_2[1] + 2;
  }
  iVar3 = FUN_14000c110(param_1,&DAT_140ea7b80);
  if (iVar3 == 0) {
    local_78[0] = 0;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 0;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 3;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 3;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 4;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 4;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 5;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 5;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 1;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 1;
      }
    }
    param_2[1] = param_2[1] + 2;
    local_78[0] = 2;
    puVar1 = (undefined2 *)param_2[1];
    if ((local_78 < puVar1) && (puVar2 = (undefined2 *)*param_2, puVar2 <= local_78)) {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] =
             *(undefined2 *)(*param_2 + ((longlong)local_78 - (longlong)puVar2 >> 1) * 2);
      }
      param_2[1] = param_2[1] + 2;
    }
    else {
      if (puVar1 == (undefined2 *)param_2[2]) {
        FUN_14000c460(param_2,1);
      }
      if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
        *(undefined2 *)param_2[1] = 2;
      }
      param_2[1] = param_2[1] + 2;
    }
  }
  if ((longlong)(param_2[1] - *param_2) >> 1 == 0) {
    local_48 = 0xf;
    local_50 = 0;
    local_60 = 0;
    FUN_14000c780(&local_60,"Unrecognized Material State Token: ",0x23);
    FUN_14000cb40(&local_60,param_1,0,0xffffffffffffffff);
    FUN_14014a240(&local_60);
    if (0xf < local_48) {
      FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
    }
  }
  return;
}

