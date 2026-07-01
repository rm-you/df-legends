// FUN_1406f5460 @ 1406f5460
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140428600 FUN_140428600


void FUN_1406f5460(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  char cVar9;
  char local_res10 [8];
  int local_res18 [4];
  
  FUN_1405bba90(param_1,local_res18,4);
  FUN_140428600(param_2,(longlong)local_res18[0]);
  uVar1 = param_2[3];
  uVar7 = 0;
  puVar5 = (uint *)*param_2;
  uVar6 = 0;
  cVar9 = local_res10[0];
  puVar8 = puVar5;
  if (uVar1 != 0) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      lVar4 = (-uVar1 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar4 = (uVar1 >> 5) * 4;
    }
    puVar8 = (uint *)((longlong)puVar5 + lVar4);
    uVar6 = (ulonglong)((uint)uVar1 & 0x1f);
  }
  while ((puVar5 < puVar8 || ((puVar5 == puVar8 && (uVar7 < uVar6))))) {
    cVar2 = FUN_1405bba90(param_1,local_res10,1);
    if (cVar2 != '\0') {
      cVar9 = local_res10[0] != '\0';
    }
    if (cVar9 == '\0') {
      uVar3 = *puVar5 & ~(1 << ((uint)uVar7 & 0x1f));
    }
    else {
      uVar3 = *puVar5 | 1 << ((uint)uVar7 & 0x1f);
    }
    *puVar5 = uVar3;
    if (uVar7 < 0x1f) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar7 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

