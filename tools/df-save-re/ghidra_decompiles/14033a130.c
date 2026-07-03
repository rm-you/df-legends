// FUN_14033a130 @ 14033a130
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 140002140 FUN_140002140
//   -> 14000bed0 FUN_14000bed0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140b0cdb0 FUN_140b0cdb0
//   -> 14000bd10 FUN_14000bd10


void FUN_14033a130(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  int local_res18 [2];
  undefined2 *local_res20;
  
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_140315ac0(param_1,param_2);
  FUN_1405bba90(param_2,param_1 + 0x7c,2);
  FUN_140002140(param_2,param_1 + 0x80);
  FUN_140002140(param_2,param_1 + 0x98);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_1405bba90(param_2,param_1 + 0xbc,4);
  FUN_1405bba90(param_2,param_1 + 0xc0,4);
  lVar4 = param_1 + 0xe0;
  lVar6 = 0x33;
  do {
    FUN_1405bba90(param_2,lVar4,4);
    lVar4 = lVar4 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x1b0,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x1b8);
  for (uVar5 = *(ulonglong *)(param_1 + 0x1b0); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x1c8,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x1d0);
  for (uVar5 = *(ulonglong *)(param_1 + 0x1c8); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x1e0,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x1e8);
  for (uVar5 = *(ulonglong *)(param_1 + 0x1e0); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x1f8,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x200);
  for (uVar5 = *(ulonglong *)(param_1 + 0x1f8); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x210,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x218);
  for (uVar5 = *(ulonglong *)(param_1 + 0x210); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bed0(param_1 + 0x228,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 0x230);
  for (uVar5 = *(ulonglong *)(param_1 + 0x228); uVar5 < uVar2; uVar5 = uVar5 + 2) {
    FUN_1405bba90(param_2,uVar5,2);
  }
  FUN_1405bba90(param_2,param_1 + 0x240,1);
  FUN_1405bba90(param_2,param_1 + 0x241,1);
  FUN_1405bba90(param_2,param_1 + 0x242,1);
  FUN_1405bba90(param_2,param_1 + 0x243,1);
  if (0x678 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x244,4);
  }
  FUN_1405bba90(param_2,local_res8,4);
  plVar1 = (longlong *)(param_1 + 200);
  FUN_14000b9d0(plVar1,(longlong)local_res8[0]);
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0xd0) - *plVar1 >> 3 != 0) {
    lVar4 = 0;
    do {
      local_res20 = operator_new(0x28);
      *local_res20 = 0;
      local_res20[1] = 0xffff;
      *(undefined4 *)(local_res20 + 2) = 0x989681;
      *(undefined8 *)(local_res20 + 4) = 0x989681;
      *(undefined4 *)(local_res20 + 8) = 0xffffffff;
      *(undefined4 *)(local_res20 + 10) = 0xffffffff;
      *(undefined4 *)(local_res20 + 0xc) = 0xffffffff;
      *(undefined4 *)(local_res20 + 0xe) = 0xffffffff;
      *(undefined4 *)(local_res20 + 0x10) = 0xffffffff;
      *(undefined4 *)(local_res20 + 0x12) = 0xffffffff;
      *(undefined2 **)(lVar4 + *plVar1) = local_res20;
      FUN_140b0cdb0(*(undefined8 *)(lVar4 + *plVar1),param_2,param_3);
      lVar4 = lVar4 + 8;
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(*(longlong *)(param_1 + 0xd0) - *plVar1 >> 3))
    ;
  }
  FUN_1405bba90(param_2,param_1 + 0x24a,2);
  cVar3 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar3 != '\0') {
    *(bool *)(param_1 + 0x248) = (char)local_res18[0] != '\0';
  }
  cVar3 = FUN_1405bba90(param_2,local_res18,1);
  if (cVar3 != '\0') {
    *(bool *)(param_1 + 0x249) = (char)local_res18[0] != '\0';
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0x250,(longlong)local_res18[0]);
  uVar2 = *(ulonglong *)(param_1 + 600);
  for (uVar5 = *(ulonglong *)(param_1 + 0x250); uVar5 < uVar2; uVar5 = uVar5 + 4) {
    FUN_1405bba90(param_2,uVar5,4);
  }
  return;
}

