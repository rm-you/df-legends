// FUN_14075e900 @ 14075e900
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140760ab0 FUN_140760ab0
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_14075e900(longlong param_1,ushort param_2,int param_3,int param_4,int param_5,short param_6
                  ,short param_7,longlong param_8,char param_9,undefined4 param_10)

{
  uint *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar4 = operator_new(0x68);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar4;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) == 0) {
    puVar5 = operator_new(0x3c);
    *puVar5 = 0xffff;
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    *(undefined4 *)(puVar5 + 6) = 0xffffffff;
    *(undefined4 *)(puVar5 + 8) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0xe) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    *(undefined1 *)(puVar5 + 0x14) = 0;
    *(undefined4 *)(puVar5 + 0x16) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar5 + 10) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x1a) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x1c) = 0xffffffff;
    *(undefined2 **)(*(longlong *)(param_1 + 0x130) + 0x28) = puVar5;
  }
  if (param_8 == 0) {
    if ((param_6 < 0) || (param_7 < 0)) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x1c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x20) = 0xffffffff;
    }
    else {
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x1c) = param_6 * 0x30 + 1;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x20) = param_7 * 0x30 + 1;
    }
  }
  else {
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x1c) =
         ((*(int *)(param_8 + 0x200) + *(int *)(param_8 + 0x1f8)) / 2) * 3 + 1;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x20) =
         ((*(int *)(param_8 + 0x204) + *(int *)(param_8 + 0x1fc)) / 2) * 3 + 1;
  }
  puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x24);
  *puVar1 = *puVar1 & 0xfffffffc;
  puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x130) + 0x28);
  if ((((*puVar2 != param_2) || (*(int *)(puVar2 + 2) != param_3)) ||
      (*(int *)(puVar2 + 4) != param_4)) ||
     ((*(int *)(puVar2 + 6) != param_5 || (*(int *)(puVar2 + 8) != -1)))) {
    if (((param_2 & 0xfffd) == 0) &&
       ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 8), lVar3 == 0 ||
        ((iVar7 = (int)*(short *)(lVar3 + 0x60), 2 < iVar7 - 0x71U && (3 < iVar7 - 0x82U)))))) {
      FUN_140760ab0(param_1,0x66,0);
    }
    **(ushort **)(*(longlong *)(param_1 + 0x130) + 0x28) = param_2;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 4) = param_3;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 8) = param_4;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0xc) = param_5;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x10) = 0xffffffff;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x34) = DAT_1416b1980;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0x38) = DAT_1416b1974;
    if (param_9 != '\0') {
      plVar6 = operator_new(0x48);
      FUN_140709240(plVar6,0);
      *plVar6 = (longlong)history_event_change_hf_statest::vftable;
      *(undefined4 *)(plVar6 + 5) = 0xffffffff;
      *(undefined2 *)((longlong)plVar6 + 0x2c) = 1;
      *(undefined4 *)(plVar6 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x3c) = 0xffffffff;
      *(undefined2 *)(plVar6 + 8) = 0xffff;
      *(undefined2 *)((longlong)plVar6 + 0x42) = 0xffff;
      *(undefined4 *)(plVar6 + 5) = *(undefined4 *)(param_1 + 0xe0);
      *(ushort *)((longlong)plVar6 + 0x2c) = param_2;
      *(int *)((longlong)plVar6 + 0x34) = param_3;
      *(int *)(plVar6 + 7) = param_4;
      *(int *)((longlong)plVar6 + 0x3c) = param_5;
      *(undefined4 *)(plVar6 + 6) = param_10;
      *(short *)(plVar6 + 8) = param_6;
      *(short *)((longlong)plVar6 + 0x42) = param_7;
      *(undefined4 *)(plVar6 + 1) = DAT_1416b1980;
      *(undefined4 *)((longlong)plVar6 + 0xc) = DAT_1416b1974;
      (**(code **)(*plVar6 + 0x128))(plVar6);
    }
  }
  return;
}

