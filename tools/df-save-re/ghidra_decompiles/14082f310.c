// FUN_14082f310 @ 14082f310
// callees:
//   -> 1400ba750 FUN_1400ba750
//   -> 140d36cb0 FUN_140d36cb0
//   -> 140d32350 FUN_140d32350
//   -> 1404c59d0 FUN_1404c59d0
//   -> 14061e7d0 FUN_14061e7d0
//   -> 1408246e0 FUN_1408246e0
//   -> 140dfb5c4 operator_new
//   -> 140004650 FUN_140004650
//   -> 14000bc60 FUN_14000bc60
//   -> 14000be20 FUN_14000be20


void FUN_14082f310(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 param_5,char param_6,longlong param_7)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *local_res8;
  undefined4 *local_48;
  undefined8 *local_40;
  
  (**(code **)(*param_1 + 0x220))(param_1,&local_48,&local_res8);
  if (local_48 == (undefined4 *)0x0) {
    return;
  }
  uVar10 = 0xffffffff;
  uVar9 = 0xffff;
  iVar11 = -1;
  uVar3 = 0xffffffff;
  if (param_7 == 0) {
    if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x4b8), lVar4 != 0)) {
      iVar11 = *(int *)(lVar4 + 0x134);
      uVar3 = *(undefined4 *)(lVar4 + 0x138);
      uVar9 = (ushort)*(undefined4 *)(lVar4 + 0x13c);
    }
  }
  else {
    iVar11 = *(int *)(param_7 + 0x20);
    uVar3 = *(undefined4 *)(param_7 + 0x24);
    uVar9 = (ushort)*(undefined4 *)(param_7 + 0x28);
  }
  if (((DAT_1410b67dc == 1) || (param_6 == '\0')) && (param_7 == 0)) {
    if (param_4 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(param_4 + 0x88);
    }
    if (param_3 != 0) {
      uVar10 = *(undefined4 *)(param_3 + 4);
    }
    (**(code **)(*param_1 + 0x230))(param_1,uVar10,uVar3);
    return;
  }
  if (iVar11 == 3) {
    *local_48 = uVar3;
    *local_res8 = uVar9;
    lVar4 = FUN_1400ba750(&DAT_141c67078,*local_48);
    if (lVar4 == 0) {
      return;
    }
    if (499 < *local_res8) {
      return;
    }
    plVar5 = *(longlong **)(lVar4 + 8 + (longlong)(short)*local_res8 * 8);
  }
  else {
    plVar5 = (longlong *)FUN_140d36cb0(&DAT_141c53470,local_48,local_res8);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    uVar1 = (**(code **)(*param_1 + 0x518))(param_1);
    FUN_140d32350(&DAT_141c53470,plVar5,param_2,param_3,param_4,uVar1,param_5,param_6,1);
    if (param_2 == 0) {
      if (param_3 != 0) {
        FUN_1404c59d0(param_3,plVar5 + 7,0xb);
        goto LAB_14082f543;
      }
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x74);
    }
    FUN_14061e7d0(plVar5 + 7,uVar3,0xb,&DAT_141d70950,&DAT_141d754b0);
  }
LAB_14082f543:
  if (plVar5 != (longlong *)0x0) {
    if (plVar5[0x19] == 0) {
      *(undefined4 *)(plVar5 + 0x16) = 5;
      uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
      *(undefined2 *)((longlong)plVar5 + 0xb4) = uVar1;
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined4 *)(plVar5 + 0x17) = uVar3;
      uVar1 = (**(code **)(*param_1 + 0x518))(param_1);
      *(undefined2 *)((longlong)plVar5 + 0xbc) = uVar1;
      if (param_2 != 0) {
        *(undefined4 *)(plVar5 + 0x18) = *(undefined4 *)(param_2 + 0xc10);
      }
      if (DAT_1410b67dc == 0) {
        *(undefined4 *)((longlong)plVar5 + 0xc4) = DAT_141c36b84;
      }
      if (((*(uint *)(param_1 + 2) & 0x40000) == 0) ||
         (puVar6 = (undefined4 *)FUN_1408246e0(param_1,1), puVar6 == (undefined4 *)0x0)) {
        puVar7 = operator_new(0x18);
        *puVar7 = general_ref_item_typest::vftable;
        sVar2 = (**(code **)*param_1)(param_1);
        *(int *)(puVar7 + 1) = (int)sVar2;
        sVar2 = (**(code **)(*param_1 + 8))(param_1);
        *(int *)((longlong)puVar7 + 0xc) = (int)sVar2;
        uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
        *(undefined2 *)(puVar7 + 2) = uVar1;
        uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
        *(undefined2 *)((longlong)puVar7 + 0x12) = uVar1;
        plVar5[0x19] = (longlong)puVar7;
      }
      else {
        puVar7 = operator_new(0x10);
        *puVar7 = general_ref_artifactst::vftable;
        *(undefined4 *)(puVar7 + 1) = *puVar6;
        plVar5[0x19] = (longlong)puVar7;
      }
      if ((param_7 != 0) && (lVar4 = FUN_140004650(&DAT_141d7a048,(int)plVar5[0x18]), lVar4 != 0)) {
        if (*(longlong *)(lVar4 + 0x130) == 0) {
          local_40 = operator_new(0x68);
          *local_40 = 0;
          local_40[1] = 0;
          local_40[2] = 0;
          local_40[3] = 0;
          local_40[4] = 0;
          local_40[5] = 0;
          local_40[6] = 0;
          local_40[7] = 0;
          local_40[8] = 0;
          local_40[9] = 0;
          local_40[10] = 0;
          local_40[0xb] = 0;
          local_40[0xc] = 0;
          *(undefined8 **)(lVar4 + 0x130) = local_40;
        }
        if (*(longlong *)(*(longlong *)(lVar4 + 0x130) + 0x20) == 0) {
          puVar7 = operator_new(0x60);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          *(undefined8 **)(*(longlong *)(lVar4 + 0x130) + 0x20) = puVar7;
        }
        FUN_14000bc60(*(longlong *)(*(longlong *)(lVar4 + 0x130) + 0x20) + 0x30,plVar5 + 0x1b);
        FUN_14000be20(*(longlong *)(*(longlong *)(lVar4 + 0x130) + 0x20) + 0x48,
                      (longlong)plVar5 + 0xdc);
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x210))(param_1);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = 0;
      puVar8 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar8 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)puVar8 = 0;
      if (plVar5[1] - *plVar5 >> 3 != 0) {
        plVar5 = *(longlong **)*plVar5;
        (**(code **)(*plVar5 + 0x40))(plVar5,puVar7,0);
      }
    }
  }
  return;
}

