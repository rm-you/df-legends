// FUN_140822a30 @ 140822a30
// callees:
//   -> 140c771c0 FUN_140c771c0


void FUN_140822a30(longlong *param_1,short param_2,char param_3,char param_4)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((0 < DAT_141c34170) && ((*DAT_141c34168 & 1) != 0)) && (param_2 != -0x159f)) {
    sVar1 = (**(code **)(*param_1 + 0x160))();
    if (sVar1 != -0x159f) {
      param_2 = sVar1;
    }
    uVar6 = 0;
    if (param_3 != '\0') {
      *(short *)(param_1 + 0x13) = param_2;
      *(undefined2 *)((longlong)param_1 + 0x9a) = 0;
      (**(code **)(*param_1 + 0x120))(param_1);
    }
    if ((param_4 != '\0') && (uVar7 = uVar6, param_1[8] - param_1[7] >> 3 != 0)) {
      do {
        iVar2 = (**(code **)(**(longlong **)(uVar7 + param_1[7]) + 0x10))();
        if ((iVar2 == 10) &&
           (plVar3 = (longlong *)(**(code **)(**(longlong **)(uVar7 + param_1[7]) + 0x18))(),
           plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x4c0))(plVar3,param_2,1);
        }
        iVar2 = (**(code **)(**(longlong **)(uVar7 + param_1[7]) + 0x10))();
        if ((iVar2 == 9) &&
           (lVar4 = (**(code **)(**(longlong **)(uVar7 + param_1[7]) + 0x20))(), lVar4 != 0)) {
          FUN_140c771c0(lVar4,param_2,1,1,1);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(param_1[8] - param_1[7] >> 3));
    }
  }
  return;
}

