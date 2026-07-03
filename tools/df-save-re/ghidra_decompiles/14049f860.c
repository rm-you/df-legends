// FUN_14049f860 @ 14049f860
// callees:
//   -> 14049ef00 FUN_14049ef00
//   -> 14000c460 FUN_14000c460


void FUN_14049f860(longlong param_1)

{
  ulonglong *puVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  short *psVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  short local_res8 [4];
  ulonglong local_res10;
  
  lVar10 = param_1;
  FUN_14049ef00();
  uVar7 = 0;
  local_res10 = 0;
  uVar11 = uVar7;
  if (*(longlong *)(lVar10 + 0x178) - *(longlong *)(lVar10 + 0x170) >> 1 != 0) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x170) + uVar11 * 2);
      lVar10 = (longlong)sVar2 * 8;
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e0b8);
      local_res8[0] = sVar2;
      if ((*(char *)(lVar3 + 0x104) == '\x01') ||
         (((*(char *)(lVar3 + 0x104) == '\0' && (0 < *(int *)(lVar3 + 0x138))) &&
          ((**(byte **)(lVar3 + 0x130) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x14a0);
        psVar4 = *(short **)(param_1 + 0x14a8);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x14b0)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x14a8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x14a8) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x14b0)) {
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x14a8) != (short *)0x0) {
            **(short **)(param_1 + 0x14a8) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x14a8) = *(longlong *)(param_1 + 0x14a8) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e0b8);
      if ((*(char *)(lVar3 + 0x104) == '\x02') ||
         (((*(char *)(lVar3 + 0x104) == '\x01' && (0 < *(int *)(lVar3 + 0x138))) &&
          ((**(byte **)(lVar3 + 0x130) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x14b8);
        psVar4 = *(short **)(param_1 + 0x14c0);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x14c8)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x14c0) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x14c0) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x14c8)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x14c0) != (short *)0x0) {
            **(short **)(param_1 + 0x14c0) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x14c0) = *(longlong *)(param_1 + 0x14c0) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e0b8);
      if ((*(char *)(lVar3 + 0x104) == '\x03') ||
         (((*(char *)(lVar3 + 0x104) == '\x02' && (0 < *(int *)(lVar3 + 0x138))) &&
          ((**(byte **)(lVar3 + 0x130) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x14d0);
        psVar4 = *(short **)(param_1 + 0x14d8);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x14e0)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x14d8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x14d8) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x14e0)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x14d8) != (short *)0x0) {
            **(short **)(param_1 + 0x14d8) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x14d8) = *(longlong *)(param_1 + 0x14d8) + 2;
      }
      if (*(char *)(*(longlong *)(lVar10 + DAT_141d6e0b8) + 0x104) == '\0') {
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e0b8) + 0x120) == 0) {
          puVar1 = (ulonglong *)(param_1 + 0x14e8);
          psVar4 = *(short **)(param_1 + 0x14f0);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x14f8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x14f0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x14f0) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x14f8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x14f0) != (short *)0x0) {
              **(short **)(param_1 + 0x14f0) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x14f0) = *(longlong *)(param_1 + 0x14f0) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e0b8) + 0x120) == 1) {
          puVar1 = (ulonglong *)(param_1 + 0x1500);
          psVar4 = *(short **)(param_1 + 0x1508);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1510)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1508) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1508) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1510)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1508) != (short *)0x0) {
              **(short **)(param_1 + 0x1508) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1508) = *(longlong *)(param_1 + 0x1508) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e0b8) + 0x120) == 3) {
          puVar1 = (ulonglong *)(param_1 + 0x1518);
          psVar4 = *(short **)(param_1 + 0x1520);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1528)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1520) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1520) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1528)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1520) != (short *)0x0) {
              **(short **)(param_1 + 0x1520) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1520) = *(longlong *)(param_1 + 0x1520) + 2;
        }
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar11 = uVar11 + 1;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x178) - *(longlong *)(param_1 + 0x170) >> 1));
  }
  uVar7 = 0;
  uVar11 = uVar7;
  if (*(longlong *)(param_1 + 0x1f0) - *(longlong *)(param_1 + 0x1e8) >> 1 != 0) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x1e8) + uVar11 * 2);
      lVar10 = (longlong)sVar2 * 8;
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e160);
      local_res8[0] = sVar2;
      if ((*(char *)(lVar3 + 0x104) == '\x01') ||
         (((*(char *)(lVar3 + 0x104) == '\0' && (0 < *(int *)(lVar3 + 0x110))) &&
          ((**(byte **)(lVar3 + 0x108) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1530);
        psVar4 = *(short **)(param_1 + 0x1538);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1540)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1538) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1538) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1540)) {
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1538) != (short *)0x0) {
            **(short **)(param_1 + 0x1538) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1538) = *(longlong *)(param_1 + 0x1538) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e160);
      if ((*(char *)(lVar3 + 0x104) == '\x02') ||
         (((*(char *)(lVar3 + 0x104) == '\x01' && (0 < *(int *)(lVar3 + 0x110))) &&
          ((**(byte **)(lVar3 + 0x108) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1548);
        psVar4 = *(short **)(param_1 + 0x1550);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1558)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1550) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1550) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1558)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1550) != (short *)0x0) {
            **(short **)(param_1 + 0x1550) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1550) = *(longlong *)(param_1 + 0x1550) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e160);
      if ((*(char *)(lVar3 + 0x104) == '\x03') ||
         (((*(char *)(lVar3 + 0x104) == '\x02' && (0 < *(int *)(lVar3 + 0x110))) &&
          ((**(byte **)(lVar3 + 0x108) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1560);
        psVar4 = *(short **)(param_1 + 0x1568);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1570)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1568) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1568) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1570)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1568) != (short *)0x0) {
            **(short **)(param_1 + 0x1568) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1568) = *(longlong *)(param_1 + 0x1568) + 2;
      }
      if (*(char *)(*(longlong *)(lVar10 + DAT_141d6e160) + 0x104) == '\0') {
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e160) + 0x130) == 0) {
          puVar1 = (ulonglong *)(param_1 + 0x1578);
          psVar4 = *(short **)(param_1 + 0x1580);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1588)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1580) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1580) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1588)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1580) != (short *)0x0) {
              **(short **)(param_1 + 0x1580) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1580) = *(longlong *)(param_1 + 0x1580) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e160) + 0x130) == 1) {
          puVar1 = (ulonglong *)(param_1 + 0x1590);
          psVar4 = *(short **)(param_1 + 0x1598);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x15a0)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1598) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1598) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x15a0)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1598) != (short *)0x0) {
              **(short **)(param_1 + 0x1598) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1598) = *(longlong *)(param_1 + 0x1598) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e160) + 0x130) == 3) {
          puVar1 = (ulonglong *)(param_1 + 0x15a8);
          psVar4 = *(short **)(param_1 + 0x15b0);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x15b8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x15b0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x15b0) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x15b8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x15b0) != (short *)0x0) {
              **(short **)(param_1 + 0x15b0) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x15b0) = *(longlong *)(param_1 + 0x15b0) + 2;
        }
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar11 = uVar11 + 1;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x1f0) - *(longlong *)(param_1 + 0x1e8) >> 1));
  }
  lVar10 = 0;
  iVar9 = 0;
  if (*(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1a0) >> 1 != 0) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x1a0) + lVar10 * 2);
      lVar3 = (longlong)sVar2 * 8;
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e148);
      local_res8[0] = sVar2;
      if ((*(char *)(lVar6 + 0xc4) == '\x01') ||
         (((*(char *)(lVar6 + 0xc4) == '\0' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x15c0);
        psVar4 = *(short **)(param_1 + 0x15c8);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x15d0)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x15c8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x15c8) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x15d0)) {
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x15c8) != (short *)0x0) {
            **(short **)(param_1 + 0x15c8) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x15c8) = *(longlong *)(param_1 + 0x15c8) + 2;
      }
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e148);
      if ((*(char *)(lVar6 + 0xc4) == '\x02') ||
         (((*(char *)(lVar6 + 0xc4) == '\x01' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x15d8);
        psVar4 = *(short **)(param_1 + 0x15e0);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x15e8)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x15e0) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x15e0) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x15e8)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x15e0) != (short *)0x0) {
            **(short **)(param_1 + 0x15e0) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x15e0) = *(longlong *)(param_1 + 0x15e0) + 2;
      }
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e148);
      if ((*(char *)(lVar6 + 0xc4) == '\x03') ||
         (((*(char *)(lVar6 + 0xc4) == '\x02' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x15f0);
        psVar4 = *(short **)(param_1 + 0x15f8);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1600)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x15f8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x15f8) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1600)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x15f8) != (short *)0x0) {
            **(short **)(param_1 + 0x15f8) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x15f8) = *(longlong *)(param_1 + 0x15f8) + 2;
      }
      if (*(char *)(*(longlong *)(lVar3 + DAT_141d6e148) + 0xc4) == '\0') {
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e148) + 0xf0) == 0) {
          puVar1 = (ulonglong *)(param_1 + 0x1608);
          psVar4 = *(short **)(param_1 + 0x1610);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1618)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1610) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1610) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1618)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1610) != (short *)0x0) {
              **(short **)(param_1 + 0x1610) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1610) = *(longlong *)(param_1 + 0x1610) + 2;
        }
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e148) + 0xf0) == 1) {
          puVar1 = (ulonglong *)(param_1 + 0x1620);
          psVar4 = *(short **)(param_1 + 0x1628);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1630)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1628) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1628) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1630)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1628) != (short *)0x0) {
              **(short **)(param_1 + 0x1628) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1628) = *(longlong *)(param_1 + 0x1628) + 2;
        }
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e148) + 0xf0) == 3) {
          puVar1 = (ulonglong *)(param_1 + 0x1638);
          psVar4 = *(short **)(param_1 + 0x1640);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1648)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1640) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1640) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1648)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x1640) != (short *)0x0) {
              **(short **)(param_1 + 0x1640) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1640) = *(longlong *)(param_1 + 0x1640) + 2;
        }
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 1;
    } while ((ulonglong)(longlong)iVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1a0) >> 1));
  }
  uVar7 = 0;
  uVar11 = uVar7;
  if (*(longlong *)(param_1 + 0x1d8) - *(longlong *)(param_1 + 0x1d0) >> 1 != 0) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x1d0) + uVar11 * 2);
      lVar10 = (longlong)sVar2 * 8;
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e118);
      local_res8[0] = sVar2;
      if ((*(char *)(lVar3 + 0xc4) == '\x01') ||
         (((*(char *)(lVar3 + 0xc4) == '\0' && (0 < *(int *)(lVar3 + 0xd0))) &&
          ((**(byte **)(lVar3 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1650);
        psVar4 = *(short **)(param_1 + 0x1658);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1660)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1658) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1658) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1660)) {
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1658) != (short *)0x0) {
            **(short **)(param_1 + 0x1658) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1658) = *(longlong *)(param_1 + 0x1658) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e118);
      if ((*(char *)(lVar3 + 0xc4) == '\x02') ||
         (((*(char *)(lVar3 + 0xc4) == '\x01' && (0 < *(int *)(lVar3 + 0xd0))) &&
          ((**(byte **)(lVar3 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1668);
        psVar4 = *(short **)(param_1 + 0x1670);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1678)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1670) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1670) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1678)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1670) != (short *)0x0) {
            **(short **)(param_1 + 0x1670) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1670) = *(longlong *)(param_1 + 0x1670) + 2;
      }
      lVar3 = *(longlong *)(lVar10 + DAT_141d6e118);
      if ((*(char *)(lVar3 + 0xc4) == '\x03') ||
         (((*(char *)(lVar3 + 0xc4) == '\x02' && (0 < *(int *)(lVar3 + 0xd0))) &&
          ((**(byte **)(lVar3 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1680);
        psVar4 = *(short **)(param_1 + 0x1688);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1690)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1688) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1688) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1690)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1);
          }
          if (*(short **)(param_1 + 0x1688) != (short *)0x0) {
            **(short **)(param_1 + 0x1688) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1688) = *(longlong *)(param_1 + 0x1688) + 2;
      }
      if (*(char *)(*(longlong *)(lVar10 + DAT_141d6e118) + 0xc4) == '\0') {
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e118) + 0xf0) == 0) {
          puVar1 = (ulonglong *)(param_1 + 0x1698);
          psVar4 = *(short **)(param_1 + 0x16a0);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x16a8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x16a0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x16a0) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x16a8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x16a0) != (short *)0x0) {
              **(short **)(param_1 + 0x16a0) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x16a0) = *(longlong *)(param_1 + 0x16a0) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e118) + 0xf0) == 1) {
          puVar1 = (ulonglong *)(param_1 + 0x16b0);
          psVar4 = *(short **)(param_1 + 0x16b8);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x16c0)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x16b8) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x16b8) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x16c0)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x16b8) != (short *)0x0) {
              **(short **)(param_1 + 0x16b8) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x16b8) = *(longlong *)(param_1 + 0x16b8) + 2;
        }
        if (*(int *)(*(longlong *)(lVar10 + DAT_141d6e118) + 0xf0) == 3) {
          puVar1 = (ulonglong *)(param_1 + 0x16c8);
          psVar4 = *(short **)(param_1 + 0x16d0);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x16d8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x16d0) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x16d0) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x16d8)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1);
            }
            if (*(short **)(param_1 + 0x16d0) != (short *)0x0) {
              **(short **)(param_1 + 0x16d0) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x16d0) = *(longlong *)(param_1 + 0x16d0) + 2;
        }
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar11 = uVar11 + 1;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x1d8) - *(longlong *)(param_1 + 0x1d0) >> 1));
  }
  lVar10 = 0;
  if (*(longlong *)(param_1 + 0x1c0) - *(longlong *)(param_1 + 0x1b8) >> 1 != 0) {
    do {
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x1b8) + lVar10 * 2);
      lVar3 = (longlong)sVar2 * 8;
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e100);
      local_res8[0] = sVar2;
      if ((*(char *)(lVar6 + 0xc4) == '\x01') ||
         (((*(char *)(lVar6 + 0xc4) == '\0' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x16e0);
        psVar4 = *(short **)(param_1 + 0x16e8);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x16f0)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x16e8) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x16e8) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x16f0)) {
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x16e8) != (short *)0x0) {
            **(short **)(param_1 + 0x16e8) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x16e8) = *(longlong *)(param_1 + 0x16e8) + 2;
      }
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e100);
      if ((*(char *)(lVar6 + 0xc4) == '\x02') ||
         (((*(char *)(lVar6 + 0xc4) == '\x01' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x16f8);
        psVar4 = *(short **)(param_1 + 0x1700);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1708)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1700) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1700) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1708)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x1700) != (short *)0x0) {
            **(short **)(param_1 + 0x1700) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1700) = *(longlong *)(param_1 + 0x1700) + 2;
      }
      lVar6 = *(longlong *)(lVar3 + DAT_141d6e100);
      if ((*(char *)(lVar6 + 0xc4) == '\x03') ||
         (((*(char *)(lVar6 + 0xc4) == '\x02' && (0 < *(int *)(lVar6 + 0xd0))) &&
          ((**(byte **)(lVar6 + 200) & 1) != 0)))) {
        puVar1 = (ulonglong *)(param_1 + 0x1710);
        psVar4 = *(short **)(param_1 + 0x1718);
        if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
          if (psVar4 == *(short **)(param_1 + 0x1720)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(undefined2 **)(param_1 + 0x1718) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1718) =
                 *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
          }
        }
        else {
          if (psVar4 == *(short **)(param_1 + 0x1720)) {
            local_res8[0] = sVar2;
            FUN_14000c460(puVar1,1);
          }
          if (*(short **)(param_1 + 0x1718) != (short *)0x0) {
            **(short **)(param_1 + 0x1718) = sVar2;
          }
        }
        *(longlong *)(param_1 + 0x1718) = *(longlong *)(param_1 + 0x1718) + 2;
      }
      if (*(char *)(*(longlong *)(lVar3 + DAT_141d6e100) + 0xc4) == '\0') {
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e100) + 0xf0) == 0) {
          puVar1 = (ulonglong *)(param_1 + 0x1728);
          psVar4 = *(short **)(param_1 + 0x1730);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1738)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1730) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1730) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1738)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(short **)(param_1 + 0x1730) != (short *)0x0) {
              **(short **)(param_1 + 0x1730) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1730) = *(longlong *)(param_1 + 0x1730) + 2;
        }
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e100) + 0xf0) == 1) {
          puVar1 = (ulonglong *)(param_1 + 0x1740);
          psVar4 = *(short **)(param_1 + 0x1748);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1750)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1748) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1748) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1750)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(short **)(param_1 + 0x1748) != (short *)0x0) {
              **(short **)(param_1 + 0x1748) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1748) = *(longlong *)(param_1 + 0x1748) + 2;
        }
        if (*(int *)(*(longlong *)(lVar3 + DAT_141d6e100) + 0xf0) == 3) {
          puVar1 = (ulonglong *)(param_1 + 0x1758);
          psVar4 = *(short **)(param_1 + 0x1760);
          if ((local_res8 < psVar4) && (psVar5 = (short *)*puVar1, psVar5 <= local_res8)) {
            if (psVar4 == *(short **)(param_1 + 0x1768)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(undefined2 **)(param_1 + 0x1760) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1760) =
                   *(undefined2 *)(*puVar1 + ((longlong)local_res8 - (longlong)psVar5 >> 1) * 2);
            }
          }
          else {
            if (psVar4 == *(short **)(param_1 + 0x1768)) {
              local_res8[0] = sVar2;
              FUN_14000c460(puVar1,1);
            }
            if (*(short **)(param_1 + 0x1760) != (short *)0x0) {
              **(short **)(param_1 + 0x1760) = sVar2;
            }
          }
          *(longlong *)(param_1 + 0x1760) = *(longlong *)(param_1 + 0x1760) + 2;
        }
      }
      lVar10 = lVar10 + 1;
      uVar8 = (int)local_res10 + 1;
      local_res10 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c0) - *(longlong *)(param_1 + 0x1b8) >> 1));
  }
  return;
}

