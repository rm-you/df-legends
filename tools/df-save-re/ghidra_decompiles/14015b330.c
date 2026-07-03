// FUN_14015b330 @ 14015b330
// callees:
//   -> 14066a010 FUN_14066a010
//   -> 140150dd0 FUN_140150dd0
//   -> 140dfb5c4 operator_new
//   -> 140dfc99c memset
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c2d0 FUN_14000c2d0


void FUN_14015b330(uint *param_1,short param_2,short param_3,short param_4,undefined4 param_5,
                  short param_6,int param_7,char param_8)

{
  ushort uVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  short sVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *local_38 [2];
  
  if (param_4 == -1) {
    return;
  }
  if (param_8 != '\0') {
    FUN_14066a010((short)param_1[0x22] + param_2,*(short *)((longlong)param_1 + 0x8a) + param_3,
                  (short)param_1[0x23]);
  }
  if (0 < param_7) {
    plVar9 = *(longlong **)(param_1 + 2);
    uVar11 = 0;
    uVar10 = (*(longlong *)(param_1 + 4) - (longlong)plVar9) + 7U >> 3;
    if (*(longlong **)(param_1 + 4) < plVar9) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      do {
        sVar4 = (*(code *)**(undefined8 **)*plVar9)();
        if (sVar4 == 5) {
          lVar7 = *plVar9;
          lVar12 = (longlong)param_3 + (longlong)param_2 * 0x10;
          uVar1 = *(ushort *)(lVar7 + 8 + lVar12 * 2);
          if (((uVar1 & 1) != 0) && ((byte)(*(char *)(lVar12 + 0x208 + lVar7) - 1U) < 3)) {
            *(ushort *)(lVar7 + 8 + lVar12 * 2) = uVar1 & 0xfffe;
          }
        }
        plVar9 = plVar9 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
  }
  puVar6 = (undefined8 *)FUN_140150dd0(param_1,param_4,param_5,param_6);
  if (puVar6 != (undefined8 *)0x0) goto LAB_14015b5e7;
  puVar6 = operator_new(0x118);
  *puVar6 = block_square_event_material_spatterst::vftable;
  local_38[0] = puVar6;
  memset((void *)((longlong)puVar6 + 0x12),0,0x100);
  *(undefined4 *)((longlong)puVar6 + 0x112) = 0xea61ea61;
  *(short *)(puVar6 + 1) = param_4;
  *(undefined4 *)((longlong)puVar6 + 0xc) = param_5;
  *(short *)(puVar6 + 2) = param_6;
  lVar7 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
  if (lVar7 == 0) {
    sVar4 = -0x159f;
  }
  else {
    sVar4 = *(short *)(lVar7 + 0x88);
  }
  lVar7 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
  if (lVar7 == 0) {
    sVar8 = -0x159f;
  }
  else {
    sVar8 = *(short *)(lVar7 + 0x8a);
  }
  iVar5 = (int)param_6;
  if (param_6 == 0) {
LAB_14015b509:
    if (sVar4 != -0x159f) {
      sVar8 = sVar4;
    }
LAB_14015b510:
    *(short *)((longlong)puVar6 + 0x114) = sVar8;
  }
  else {
    if (iVar5 == 1) {
      if ((sVar4 != -0x159f) && (sVar4 != 0)) {
        *(short *)((longlong)puVar6 + 0x112) = sVar4 + -1;
      }
      goto LAB_14015b510;
    }
    if (iVar5 == 2) {
      if ((sVar8 == -0x159f) || (sVar8 == 0)) {
        if ((sVar4 != -0x159f) && (sVar4 != 0)) {
          *(short *)((longlong)puVar6 + 0x112) = sVar4 + -1;
        }
      }
      else {
        *(short *)((longlong)puVar6 + 0x112) = sVar8 + -1;
      }
    }
    else if (iVar5 - 3U < 3) goto LAB_14015b509;
  }
  ppuVar2 = *(undefined8 ***)(param_1 + 4);
  if ((local_38 < ppuVar2) && (ppuVar3 = *(undefined8 ***)(param_1 + 2), ppuVar3 <= local_38)) {
    if (ppuVar2 == *(undefined8 ***)(param_1 + 6)) {
      local_38[0] = puVar6;
      FUN_14000c2d0(param_1 + 2,1);
    }
    if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 4) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 2) + ((longlong)local_38 - (longlong)ppuVar3 >> 3) * 8);
    }
  }
  else {
    if (ppuVar2 == *(undefined8 ***)(param_1 + 6)) {
      local_38[0] = puVar6;
      FUN_14000c2d0(param_1 + 2,1);
    }
    if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 4) = puVar6;
    }
  }
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 8;
LAB_14015b5e7:
  lVar7 = (longlong)param_3 + (longlong)param_2 * 0x10;
  param_7 = (uint)*(byte *)((longlong)puVar6 + lVar7 + 0x12) + param_7;
  if (param_7 < 0x100) {
    *(char *)((longlong)puVar6 + lVar7 + 0x12) = (char)param_7;
  }
  else {
    *(char *)((longlong)puVar6 + lVar7 + 0x12) =
         ('\x01' - (((char)(param_7 / 100) + (char)(param_7 >> 0x1f)) -
                   (char)((longlong)param_7 * 0x51eb851f >> 0x3f))) * 'd' + (char)param_7;
  }
  *param_1 = *param_1 | 0x200;
  return;
}

