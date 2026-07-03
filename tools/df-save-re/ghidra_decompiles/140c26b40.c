// FUN_140c26b40 @ 140c26b40
// callees:
//   -> 140050d30 FUN_140050d30
//   -> 140c63d90 FUN_140c63d90
//   -> 14000bc60 FUN_14000bc60
//   -> 140050070 FUN_140050070
//   -> 140cc55b0 FUN_140cc55b0


void FUN_140c26b40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  if ((((*(short *)(param_1 + 0x7e4) < 1) && (*(short *)(param_1 + 0x7e8) < 10)) &&
      (*(int *)(param_1 + 0x958) < 100)) &&
     ((*(longlong *)(param_1 + 0xd60) == 0 &&
      (iVar5 = 0, *(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3 != 0)))) {
    lVar6 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar6 + *(longlong *)(param_1 + 0x3f8));
      if ((*(short *)(puVar1 + 1) == 1) &&
         (iVar4 = (**(code **)(*(longlong *)*puVar1 + 0x590))(), 0 < iVar4)) {
        lVar2 = *(longlong *)(param_1 + 0x3f8);
        plVar3 = (longlong *)**(longlong **)(lVar2 + lVar6);
        iVar4 = FUN_140050d30(*(undefined4 *)((longlong)plVar3 + 0x1c),param_4);
        if (iVar4 == -1) {
          puVar1 = *(undefined8 **)(lVar2 + lVar6);
          iVar4 = (**(code **)(*plVar3 + 0x590))();
          local_res8[0] =
               FUN_140c63d90(param_1,7,iVar4 + 1,0xf,0x14,0,*puVar1,0,3,0xffff,0xffffffff);
          FUN_14000bc60(param_2,local_res8);
          FUN_140050070(param_3,*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x3f8)));
          (**(code **)(*(longlong *)**(undefined8 **)(lVar6 + *(longlong *)(param_1 + 0x3f8)) +
                      0x710))();
          FUN_140cc55b0(param_1,**(undefined8 **)(lVar6 + *(longlong *)(param_1 + 0x3f8)));
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3));
  }
  return;
}

