// FUN_1406f5380 @ 1406f5380
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406f5380(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_res10 [2];
  
  local_res10[0] = *(undefined4 *)(param_2 + 3);
  FUN_1405bb7c0(param_1,local_res10,4);
  uVar1 = param_2[3];
  uVar3 = 0;
  puVar5 = (uint *)*param_2;
  uVar4 = 0;
  puVar6 = puVar5;
  if (uVar1 != 0) {
    if (((longlong)uVar1 < 0) && (uVar1 != 0)) {
      lVar2 = (-uVar1 - 1 >> 5) * -4 + -4;
    }
    else {
      lVar2 = (uVar1 >> 5) * 4;
    }
    puVar6 = (uint *)((longlong)puVar5 + lVar2);
    uVar4 = (ulonglong)((uint)uVar1 & 0x1f);
  }
  while ((puVar5 < puVar6 || ((puVar5 == puVar6 && (uVar3 < uVar4))))) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(*puVar5 & 1 << ((byte)uVar3 & 0x1f)) != 0);
    FUN_1405bb7c0(param_1,local_res10,1);
    if (uVar3 < 0x1f) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar3 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

