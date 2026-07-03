// FUN_140820540 @ 140820540
// callees:
//   -> 1408248c0 FUN_1408248c0
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1407f0050 FUN_1407f0050


void FUN_140820540(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  FUN_1408248c0();
  FUN_1405bba90(param_2,local_res8,4);
  plVar5 = (longlong *)(param_1 + 200);
  FUN_14000b9d0(plVar5,(longlong)local_res8[0]);
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0xd0) - *plVar5 >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *plVar5;
      uVar2 = FUN_1407f0050(param_2);
      *(undefined8 *)(lVar1 + lVar4) = uVar2;
      (**(code **)(**(longlong **)(lVar4 + *plVar5) + 0x20))
                (*(longlong **)(lVar4 + *plVar5),param_2,param_3);
      lVar4 = lVar4 + 8;
      iVar3 = iVar3 + 1;
    } while ((ulonglong)(longlong)iVar3 < (ulonglong)(*(longlong *)(param_1 + 0xd0) - *plVar5 >> 3))
    ;
  }
  return;
}

