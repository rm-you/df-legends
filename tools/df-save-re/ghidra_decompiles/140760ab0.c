// FUN_140760ab0 @ 140760ab0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140758120 FUN_140758120
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_140760ab0(longlong param_1,ushort param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x170) = 0xffffffffffffffff;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar2 = operator_new(0x68);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) == 0) {
    puVar2 = operator_new(0x78);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0x66;
    *(undefined8 *)((longlong)puVar2 + 100) = 0;
    puVar2[0xe] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 8) = puVar2;
    FUN_140758120(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8),*(undefined2 *)(param_1 + 2),
                  *(undefined2 *)(param_1 + 4),param_4,uVar5);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 8);
  uVar4 = *(ushort *)(lVar1 + 0x60);
  if (0x86 < uVar4) {
    uVar4 = 0x66;
  }
  *(ushort *)(lVar1 + 0x60) = param_2;
  if ((param_3 != '\0') && (param_2 != uVar4)) {
    plVar3 = operator_new(0x40);
    FUN_140709240(plVar3,0);
    *plVar3 = (longlong)history_event_change_hf_jobst::vftable;
    *(undefined4 *)(plVar3 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)plVar3 + 0x2c) = 0x660066;
    plVar3[6] = -1;
    *(undefined4 *)(plVar3 + 7) = 0xffffffff;
    *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(param_1 + 0xe0);
    *(ushort *)((longlong)plVar3 + 0x2c) = param_2;
    *(ushort *)((longlong)plVar3 + 0x2e) = uVar4;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28);
    if (lVar1 != 0) {
      *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(lVar1 + 4);
      *(undefined4 *)((longlong)plVar3 + 0x34) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 8);
      *(undefined4 *)(plVar3 + 7) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28) + 0xc);
    }
    *(undefined4 *)(plVar3 + 1) = DAT_1416b1980;
    *(undefined4 *)((longlong)plVar3 + 0xc) = DAT_1416b1974;
    (**(code **)(*plVar3 + 0x128))(plVar3);
  }
  return;
}

