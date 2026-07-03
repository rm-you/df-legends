// FUN_140a32af0 @ 140a32af0
// callees:
//   -> 1408dac80 FUN_1408dac80
//   -> 1408b9be0 FUN_1408b9be0
//   -> 1408da530 FUN_1408da530
//   -> 1408dc530 FUN_1408dc530
//   -> 140295990 FUN_140295990
//   -> 1402b6600 FUN_1402b6600
//   -> 1404c5d20 FUN_1404c5d20
//   -> 140a36870 FUN_140a36870
//   -> 1407daee0 FUN_1407daee0
//   -> 1407e2260 FUN_1407e2260
//   -> 14089ba00 FUN_14089ba00


void FUN_140a32af0(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_1408dac80(&DAT_141d6dbe0,*param_1,param_1[1]);
  iVar1 = param_1[1];
  uVar2 = (ulonglong)*param_1;
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_1408b9be0(*(longlong *)(DAT_141d6dbe0 + uVar2 * 8) + 0x1a8,0,uVar3 & 0xffffffff);
    uVar2 = uVar2 + 1;
  }
  iVar1 = param_1[3];
  uVar2 = (ulonglong)param_1[2];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_1408da530(*(undefined8 *)(DAT_141d6dc10 + uVar2 * 8),uVar3 & 0xffffffff);
    uVar2 = uVar2 + 1;
  }
  iVar1 = param_1[3];
  uVar2 = (ulonglong)param_1[2];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6dc18 - DAT_141d6dc10 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_1408dc530(*(undefined8 *)(DAT_141d6dc10 + uVar2 * 8));
    uVar2 = uVar2 + 1;
  }
  iVar1 = param_1[5];
  uVar2 = (ulonglong)param_1[4];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    (**(code **)(**(longlong **)(DAT_141d6ddb8 + uVar2 * 8) + 0x18))();
    uVar2 = uVar2 + 1;
  }
  iVar1 = param_1[5];
  uVar2 = (ulonglong)param_1[4];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6ddc0 - DAT_141d6ddb8 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    (**(code **)(**(longlong **)(DAT_141d6ddb8 + uVar2 * 8) + 0x20))();
    uVar2 = uVar2 + 1;
  }
  FUN_140295990(&DAT_141d6dd30,param_1[6],param_1[7]);
  FUN_1402b6600(&DAT_141d6dd30,param_1[6],param_1[7]);
  iVar1 = param_1[9];
  uVar2 = (ulonglong)param_1[8];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d6e198 - DAT_141d6e190 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_1404c5d20(*(undefined8 *)(DAT_141d6e190 + uVar2 * 8),uVar3 & 0xffffffff);
    uVar2 = uVar2 + 1;
  }
  uVar2 = (ulonglong)param_1[10];
  if (param_1[10] != -1) {
    iVar1 = param_1[0xb];
    for (uVar3 = uVar2;
        ((longlong)uVar2 < (longlong)iVar1 &&
        ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d77948 - DAT_141d77940 >> 3)));
        uVar3 = (ulonglong)((int)uVar3 + 1)) {
      FUN_140a36870(*(undefined8 *)(DAT_141d77940 + uVar2 * 8),uVar3 & 0xffffffff);
      uVar2 = uVar2 + 1;
    }
  }
  iVar1 = param_1[0xd];
  uVar2 = (ulonglong)param_1[0xc];
  for (uVar3 = uVar2;
      ((longlong)uVar2 < (longlong)iVar1 &&
      ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(DAT_141d779c8 - DAT_141d779c0 >> 3)));
      uVar3 = (ulonglong)((int)uVar3 + 1)) {
    FUN_1407daee0(*(undefined8 *)(DAT_141d779c0 + uVar2 * 8),uVar3 & 0xffffffff,param_2);
    uVar2 = uVar2 + 1;
  }
  FUN_1407e2260(&DAT_141d779c0,param_1[0xc],param_1[0xd]);
  FUN_14089ba00(&DAT_141d6e1a8,0xffffffff);
  return;
}

