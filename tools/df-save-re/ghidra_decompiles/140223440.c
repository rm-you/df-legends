// FUN_140223440 @ 140223440
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140d89d60 FUN_140d89d60
//   -> 14014a480 FUN_14014a480


void FUN_140223440(short *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,4);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_1405bba90(param_2,param_1 + 5,2);
  FUN_1405bba90(param_2,param_1 + 6,2);
  FUN_1405bba90(param_2,param_1 + 8,4);
  if (param_3 < 0x5b6) {
    lVar1 = FUN_140d89d60(&DAT_141c53470,*param_1,*(undefined4 *)(param_1 + 2));
    if (((lVar1 != 0) && (9 < *(int *)(lVar1 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar1 + 0x290) + 9) & 1) != 0)) {
      param_1[10] = param_1[10] | 1;
    }
  }
  else {
    FUN_1405bba90(param_2,param_1 + 10,2);
  }
  if (*param_1 == -1) {
    param_1[2] = -1;
    param_1[3] = -1;
    *param_1 = 6;
    FUN_14014a480("corrected null contaminant");
  }
  return;
}

