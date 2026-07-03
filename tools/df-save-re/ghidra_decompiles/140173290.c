// FUN_140173290 @ 140173290
// callees:
//   -> 140977750 FUN_140977750
//   -> 1409776b0 FUN_1409776b0
//   -> 140c69310 FUN_140c69310
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> 14000f360 FUN_14000f360
//   -> 140977140 FUN_140977140
//   -> 140173290 FUN_140173290
//   -> 140050070 FUN_140050070
//   -> 14000f0b0 FUN_14000f0b0


void FUN_140173290(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_res8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  cVar2 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar2 != '\0') {
    if (((param_3 == '\0') && (param_2 != 0)) &&
       (iVar3 = FUN_140977750(&DAT_141c34700,param_1), iVar3 != -1)) {
      FUN_1409776b0(&DAT_141c34700,iVar3);
    }
    if (param_1[0x1c] != 0) {
      FUN_140c69310(param_1[0x1c],param_1);
      if (param_4 != '\0') {
        lVar6 = param_1[0x1c];
        local_4c = 0xffffffff;
        local_48 = 0;
        local_44 = 0x4b;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        local_50 = 0x9e;
        lVar7 = *(longlong *)(lVar6 + 0xa78);
        if (((lVar7 != 0) && ((*(uint *)(lVar6 + 0x110) & 0x502) != 2)) &&
           ((*(uint *)(lVar6 + 0x118) & 0x1000) == 0)) {
          cVar2 = FUN_140106f30();
          FUN_1409165e0(lVar7 + 0x248,&local_50,cVar2 != '\0');
        }
      }
      if (((*(int *)(param_1[0x1c] + 0x3a8) != -1) &&
          (lVar6 = FUN_14000f360(&DAT_141c66fd0), lVar6 != 0)) &&
         ((cVar2 = (**(code **)(*param_1 + 0x1f0))(param_1), cVar2 != '\0' &&
          (FUN_140c69310(lVar6,param_1), param_4 != '\0')))) {
        lVar7 = *(longlong *)(lVar6 + 0xa78);
        local_4c = 0xffffffff;
        local_48 = 0;
        local_44 = 0x4b;
        local_28 = 0;
        local_50 = 0x9e;
        local_38 = 0;
        uStack_30 = 0;
        if (((lVar7 != 0) && ((*(uint *)(lVar6 + 0x110) & 0x502) != 2)) &&
           ((*(uint *)(lVar6 + 0x118) & 0x1000) == 0)) {
          cVar2 = FUN_140106f30(lVar6);
          FUN_1409165e0(lVar7 + 0x248,&local_50,cVar2 != '\0');
        }
      }
    }
    param_1[0x1c] = param_2;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x130);
    }
    iVar3 = (int)(DAT_141c36a90 - DAT_141c36a88 >> 3) + -1;
    if (-1 < iVar3) {
      lVar6 = (longlong)iVar3 * 8;
      lVar7 = DAT_141c36a88;
      do {
        if (*(longlong **)(*(longlong *)(lVar7 + lVar6) + 0x18) == param_1) {
          FUN_140977140(lVar7,iVar3);
          lVar7 = DAT_141c36a88;
        }
        lVar6 = lVar6 + -8;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    iVar3 = 0;
    if (((param_2 != 0) && (cVar2 = (**(code **)(*param_1 + 0x1e8))(param_1), cVar2 != '\0')) &&
       (*(longlong *)(param_2 + 0x448) - *(longlong *)(param_2 + 0x440) >> 3 != 0)) {
      local_res8 = (longlong *)0x0;
      do {
        plVar1 = *(longlong **)((longlong)local_res8 + *(longlong *)(param_2 + 0x440));
        iVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
        iVar5 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        if (iVar5 == iVar4) {
          FUN_140173290(plVar1,0,0,0);
          break;
        }
        iVar3 = iVar3 + 1;
        local_res8 = local_res8 + 1;
      } while ((ulonglong)(longlong)iVar3 <
               (ulonglong)(*(longlong *)(param_2 + 0x448) - *(longlong *)(param_2 + 0x440) >> 3));
    }
    (**(code **)(*param_1 + 0x1c0))(param_1);
    if (param_2 != 0) {
      local_res8 = param_1;
      FUN_140050070(param_2 + 0x440,&local_res8);
      if (param_3 != '\0') {
        FUN_14000f0b0(param_2,10,0x189c0);
      }
      if (((*(int *)(param_2 + 0x3a8) != -1) && (lVar6 = FUN_14000f360(&DAT_141c66fd0), lVar6 != 0))
         && ((cVar2 = (**(code **)(*param_1 + 0x1f0))(param_1), cVar2 != '\0' &&
             (local_res8 = param_1, FUN_140050070(lVar6 + 0x440,&local_res8), param_3 != '\0')))) {
        FUN_14000f0b0(lVar6,10,0x189c0);
      }
    }
  }
  return;
}

