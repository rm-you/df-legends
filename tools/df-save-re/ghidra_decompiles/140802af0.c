// FUN_140802af0 @ 140802af0
// callees:
//   -> 1408056a0 FUN_1408056a0
//   -> 140802a10 FUN_140802a10
//   -> 14081ec40 FUN_14081ec40
//   -> 140c62080 FUN_140c62080
//   -> 140c745d0 FUN_140c745d0
//   -> 1407f0860 FUN_1407f0860
//   -> 140c4cec0 FUN_140c4cec0
//   -> 140c5b050 FUN_140c5b050
//   -> EXTERNAL:000000e1 memmove
//   -> 14000dda0 FUN_14000dda0
//   -> 14083a600 FUN_14083a600
//   -> 140cec410 FUN_140cec410
//   -> 140cec360 FUN_140cec360
//   -> 1408246e0 FUN_1408246e0
//   -> 140df19a0 FUN_140df19a0
//   -> 14083a4f0 FUN_14083a4f0


void FUN_140802af0(ulonglong param_1,ulonglong param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  undefined2 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  longlong lVar12;
  uint uVar13;
  short sVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  short local_res8 [4];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  longlong local_res20;
  int local_78 [2];
  ulonglong local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  ulonglong local_58;
  undefined8 local_50;
  
  local_78[0] = -1;
  local_60[0] = 5;
  uVar10 = 0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = param_1;
  cVar3 = FUN_1408056a0(param_2,local_60,local_78);
  uVar7 = local_70;
  if (cVar3 != '\0') {
    if (local_78[0] == 5) {
      if ((local_70 == param_1) || (local_70 == param_2)) goto LAB_140802b92;
      FUN_140802a10(local_70);
      FUN_14081ec40(uVar7,param_1);
    }
    uVar7 = local_70;
    if (local_78[0] == 1) {
      FUN_140c62080(local_70);
      FUN_140c745d0(uVar7,(int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10),
                    (int)*(short *)(param_1 + 0xc));
    }
  }
LAB_140802b92:
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  for (puVar9 = *(undefined8 **)(param_2 + 0x38); uVar7 = uVar10, puVar9 < puVar1;
      puVar9 = puVar9 + 1) {
    iVar4 = (**(code **)(*(longlong *)*puVar9 + 0x10))();
    if (iVar4 == 0xb) {
      uVar7 = (**(code **)(*(longlong *)*puVar9 + 0x18))();
      break;
    }
  }
  if (uVar7 == param_1) {
    FUN_14081ec40(param_2,param_1);
  }
  FUN_1407f0860(param_1,2);
  if (((*(byte *)(param_1 + 0x14) & 1) != 0) &&
     (iVar4 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1,
     -1 < iVar4)) {
    lVar12 = (longlong)iVar4 * 8;
    lVar15 = lVar12;
    do {
      plVar2 = *(longlong **)(lVar15 + *(longlong *)(param_1 + 0x38));
      iVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (iVar5 == 0x39) {
        lVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar6 != 0) {
          *(uint *)(lVar6 + 0x118) = *(uint *)(lVar6 + 0x118) & 0xffe7ffff;
          *(undefined4 *)(lVar6 + 0x3f0) = 0xffffffff;
          cVar3 = FUN_140c4cec0(lVar6);
          if (cVar3 == '\0') {
            FUN_140c5b050(lVar6);
          }
        }
        (**(code **)(*plVar2 + 0x78))(plVar2,1);
        _Dst = (void *)(*(longlong *)(param_1 + 0x38) + lVar12);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
      }
      lVar12 = lVar12 + -8;
      lVar15 = lVar15 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  FUN_14000dda0(param_2,10,*(undefined4 *)(param_1 + 0x1c));
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x40;
  FUN_14000dda0(param_1,0xb,*(undefined4 *)(param_2 + 0x1c));
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (((*(uint *)(param_1 + 0x10) & 0x40000) != 0) || ((*(byte *)(param_1 + 0x14) & 0x20) != 0)) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x20;
    local_res20 = 0;
    local_res8[0] = -30000;
    if ((*(byte *)(param_2 + 0x10) & 8) == 0) {
      sVar14 = *(short *)(param_2 + 8);
      uVar8 = *(undefined2 *)(param_2 + 0xc);
      uVar11 = *(undefined2 *)(param_2 + 10);
LAB_140802e7d:
      if (sVar14 != -30000) {
        if (((*(uint *)(param_1 + 0x10) & 0x40000) != 0) &&
           (lVar12 = FUN_1408246e0(param_1,1), lVar12 != 0)) {
          FUN_140df19a0(extraout_XMM0_Da,lVar12,sVar14,uVar11,uVar8);
        }
        if ((*(byte *)(param_1 + 0x14) & 0x20) != 0) {
          FUN_14083a4f0(param_1,sVar14,uVar11,uVar8);
        }
      }
    }
    else {
      uVar7 = uVar10;
      if (*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3 != 0) {
        do {
          iVar4 = (**(code **)(**(longlong **)(uVar10 + *(longlong *)(param_2 + 0x38)) + 0x10))();
          if (iVar4 == 0xb) {
            lVar12 = (**(code **)(**(longlong **)(uVar10 + *(longlong *)(param_2 + 0x38)) + 0x18))()
            ;
            if (lVar12 != 0) {
              FUN_14083a600(lVar12,local_res8,local_res18,local_res10,&local_res20);
              lVar12 = local_res20;
              sVar14 = local_res8[0];
              goto LAB_140802e18;
            }
          }
          else if ((iVar4 == 0x12) &&
                  (lVar12 = (**(code **)(**(longlong **)(uVar10 + *(longlong *)(param_2 + 0x38)) +
                                        0x20))(), lVar12 != 0)) {
            *(uint *)(lVar12 + 0x11c) = *(uint *)(lVar12 + 0x11c) | 0x40;
            sVar14 = -30000;
LAB_140802e18:
            uVar8 = local_res10[0];
            uVar11 = local_res18[0];
            if (lVar12 != 0) {
              if ((*(uint *)(param_1 + 0x10) & 0x40000) != 0) {
                FUN_140cec410(lVar12,param_1);
              }
              if ((*(byte *)(param_1 + 0x14) & 0x20) == 0) {
                return;
              }
              FUN_140cec360(lVar12,param_1);
              return;
            }
            goto LAB_140802e7d;
          }
          uVar13 = (int)uVar7 + 1;
          uVar10 = uVar10 + 8;
          uVar7 = (ulonglong)uVar13;
        } while ((ulonglong)(longlong)(int)uVar13 <
                 (ulonglong)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3));
      }
      for (puVar9 = *(undefined8 **)(param_2 + 0x20); puVar9 < *(undefined8 **)(param_2 + 0x28);
          puVar9 = puVar9 + 1) {
        if (*(int *)*puVar9 == 10) {
          lVar12 = *(longlong *)((int *)*puVar9 + 2);
          sVar14 = *(short *)(lVar12 + 4);
          uVar8 = *(undefined2 *)(lVar12 + 8);
          uVar11 = *(undefined2 *)(lVar12 + 6);
          goto LAB_140802e7d;
        }
      }
    }
  }
  return;
}

