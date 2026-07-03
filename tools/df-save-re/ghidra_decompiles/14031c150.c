// FUN_14031c150 @ 14031c150
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 14031be40 FUN_14031be40
//   -> 14000bd10 FUN_14000bd10


void FUN_14031c150(undefined8 *param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res18,1);
  lVar5 = 0x6b;
  if ((char)local_res18[0] == '\0') {
    *param_1 = 0;
  }
  else {
    pvVar2 = operator_new(0xa08);
    _eh_vector_constructor_iterator_(pvVar2,0x18,0x6b,FUN_1400025a0,FUN_14007c030);
    *param_1 = pvVar2;
    FUN_14031be40(pvVar2,param_2);
  }
  puVar4 = param_1 + 1;
  do {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(puVar4,(longlong)local_res18[0]);
    uVar1 = puVar4[1];
    for (uVar3 = *puVar4; uVar3 < uVar1; uVar3 = uVar3 + 4) {
      FUN_1405bba90(param_2,uVar3,4);
    }
    puVar4 = puVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

