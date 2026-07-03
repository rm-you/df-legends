// FUN_140a36870 @ 140a36870
// callees:
//   -> 1400be580 FUN_1400be580
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 14000c110 FUN_14000c110
//   -> 14000c390 FUN_14000c390
//   -> 140475070 FUN_140475070
//   -> 14000d730 FUN_14000d730
//   -> 14000bc60 FUN_14000bc60
//   -> 140474fe0 FUN_140474fe0
//   -> 1402cd610 FUN_1402cd610
//   -> 1400503d0 FUN_1400503d0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a240 FUN_14014a240
//   -> 14000c260 FUN_14000c260
//   -> 140051e20 FUN_140051e20
//   -> 14014caa0 FUN_14014caa0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a36870(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  puVar7 = (undefined1 *)FUN_1400be580(local_60,"*** Error(s) finalizing the reaction ",param_1);
  if (puVar7 != &DAT_141c3d418) {
    if (0xf < DAT_141c3d430) {
      FUN_140002020(CONCAT71(uRam0000000141c3d419,DAT_141c3d418),DAT_141c3d430 + 1,1);
    }
    DAT_141c3d430 = 0xf;
    DAT_141c3d428 = 0;
    DAT_141c3d418 = 0;
    FUN_14007b2f0(&DAT_141c3d418,puVar7);
  }
  if (0xf < local_48) {
    FUN_140002020(local_60[0],local_48 + 1,1);
  }
  *(undefined4 *)(param_1 + 0x118) = param_2;
  iVar12 = 0;
  if (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 3 != 0) {
    lVar14 = 0;
    do {
      plVar3 = *(longlong **)(lVar14 + *(longlong *)(param_1 + 0x50));
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      iVar12 = iVar12 + 1;
      lVar14 = lVar14 + 8;
    } while ((ulonglong)(longlong)iVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 3));
  }
  iVar12 = 0;
  if (*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3 != 0) {
    lVar14 = 0;
    do {
      plVar3 = *(longlong **)(lVar14 + *(longlong *)(param_1 + 0x68));
      (**(code **)(*plVar3 + 8))(plVar3,param_2);
      iVar12 = iVar12 + 1;
      lVar14 = lVar14 + 8;
    } while ((ulonglong)(longlong)iVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3));
  }
  plVar3 = (longlong *)(param_1 + 0x88);
  iVar12 = (int)(*(longlong *)(param_1 + 0x90) - *plVar3 >> 3) + -1;
  local_74 = iVar12;
  if (-1 < iVar12) {
    lVar14 = (longlong)iVar12;
    do {
      local_74 = iVar12;
      local_70 = lVar14;
      iVar6 = FUN_14000c110(*(undefined8 *)(*plVar3 + lVar14 * 8),&DAT_140f75710);
      if (iVar6 == 0) {
        local_78 = 5;
        puVar11 = (ulonglong *)(param_1 + 0xb8);
        puVar8 = *(undefined4 **)(param_1 + 0xc0);
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
          if (puVar8 == *(undefined4 **)(param_1 + 200)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc0) =
                 *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 200)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc0) = 5;
          }
        }
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
        local_78 = 3;
        puVar1 = (ulonglong *)(param_1 + 0xd0);
        puVar8 = *(undefined4 **)(param_1 + 0xd8);
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78)) {
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390(puVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) =
                 *(undefined4 *)(*puVar1 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390(puVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) = 3;
          }
        }
        *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 4;
        local_78 = 0xffffffff;
        puVar2 = (ulonglong *)(param_1 + 0xe8);
        puVar8 = *(undefined4 **)(param_1 + 0xf0);
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar2, puVar10 <= &local_78)) {
          if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xf0) =
                 *(undefined4 *)(*puVar2 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
            FUN_14000c390(puVar2,1);
          }
          if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xf0) = 0xffffffff;
          }
        }
        *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 4;
        puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
        plVar13 = (longlong *)(param_1 + 0x100);
        puVar10 = *(undefined4 **)(param_1 + 0x108);
        if ((puVar8 < puVar10) && (puVar4 = (undefined4 *)*plVar13, puVar4 <= puVar8)) {
          if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
            FUN_140475070(plVar13);
          }
          if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x108) =
                 *(undefined4 *)(*plVar13 + ((longlong)puVar8 - (longlong)puVar4 >> 2) * 4);
          }
        }
        else {
          if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
            FUN_140475070(plVar13);
          }
          if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x108) = *puVar8;
          }
        }
        *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
        local_78 = 5;
        puVar8 = *(undefined4 **)(param_1 + 0xc0);
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
          if (puVar8 == *(undefined4 **)(param_1 + 200)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc0) =
                 *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 200)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc0) = 5;
          }
        }
        *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
        local_78 = 6;
        puVar8 = *(undefined4 **)(param_1 + 0xd8);
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78)) {
LAB_140a37310:
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390((longlong *)(param_1 + 0xd0),1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0xd0) +
                  ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390(puVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) = 6;
          }
        }
LAB_140a37363:
        plVar13 = (longlong *)(param_1 + 0x100);
        puVar11 = (ulonglong *)(param_1 + 0xe8);
        *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 4;
        puVar8 = *(undefined4 **)(param_1 + 0xf0);
        local_78 = 0xffffffff;
        if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
          if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xf0) =
                 *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
          }
        }
        else {
          if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
            FUN_14000c390(puVar11,1);
          }
          if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xf0) = 0xffffffff;
          }
        }
        lVar14 = local_70;
        *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 4;
        puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + local_70 * 4);
        puVar10 = *(undefined4 **)(param_1 + 0x108);
        if ((puVar8 < puVar10) && (puVar4 = (undefined4 *)*plVar13, puVar4 <= puVar8)) {
          if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
            FUN_140475070(plVar13);
          }
          if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x108) =
                 *(undefined4 *)(*plVar13 + ((longlong)puVar8 - (longlong)puVar4 >> 2) * 4);
          }
        }
        else {
          if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
            FUN_140475070(plVar13);
          }
          if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x108) = *puVar8;
          }
        }
        *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
        iVar12 = local_74;
      }
      else {
        iVar6 = FUN_14000c110(*(undefined8 *)(*plVar3 + lVar14 * 8),"SMELTER");
        if (iVar6 == 0) {
          local_78 = 5;
          puVar11 = (ulonglong *)(param_1 + 0xb8);
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 5;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 1;
          puVar1 = (ulonglong *)(param_1 + 0xd0);
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) =
                   *(undefined4 *)(*puVar1 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) = 1;
            }
          }
          *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 4;
          local_78 = 0xffffffff;
          puVar2 = (ulonglong *)(param_1 + 0xe8);
          puVar8 = *(undefined4 **)(param_1 + 0xf0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar2, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) = 0xffffffff;
            }
          }
          *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 4;
          puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
          plVar13 = (longlong *)(param_1 + 0x100);
          puVar10 = *(undefined4 **)(param_1 + 0x108);
          if ((puVar8 < puVar10) && (puVar4 = (undefined4 *)*plVar13, puVar4 <= puVar8)) {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) =
                   *(undefined4 *)(*plVar13 + ((longlong)puVar8 - (longlong)puVar4 >> 2) * 4);
            }
          }
          else {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) = *puVar8;
            }
          }
          *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
          local_78 = 5;
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 5;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 4;
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78))
          goto LAB_140a37310;
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390(puVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) = 4;
          }
          goto LAB_140a37363;
        }
        iVar6 = FUN_14000c110(*(undefined8 *)(*plVar3 + lVar14 * 8),&DAT_140eb5448);
        if (iVar6 == 0) {
          local_78 = 5;
          puVar11 = (ulonglong *)(param_1 + 0xb8);
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 5;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 0;
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) &&
             (puVar10 = *(undefined4 **)(param_1 + 0xd0), puVar10 <= &local_78)) {
LAB_140a37512:
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390((longlong *)(param_1 + 0xd0),1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) =
                   *(undefined4 *)
                    (*(longlong *)(param_1 + 0xd0) +
                    ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390((ulonglong *)(param_1 + 0xd0),1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) = 0;
            }
          }
LAB_140a37565:
          *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 4;
          puVar11 = (ulonglong *)(param_1 + 0xe8);
          puVar8 = *(undefined4 **)(param_1 + 0xf0);
          local_78 = 0xffffffff;
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) = 0xffffffff;
            }
          }
          *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 4;
          puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
          plVar13 = (longlong *)(param_1 + 0x100);
          puVar10 = *(undefined4 **)(param_1 + 0x108);
          if ((puVar8 < puVar10) && (puVar4 = (undefined4 *)*plVar13, puVar4 <= puVar8)) {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) =
                   *(undefined4 *)(*plVar13 + ((longlong)puVar8 - (longlong)puVar4 >> 2) * 4);
            }
          }
          else {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) = *puVar8;
            }
          }
          *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
          goto LAB_140a37b0c;
        }
        iVar6 = FUN_14000c110(*(undefined8 *)(*plVar3 + lVar14 * 8),"GLASS");
        if (iVar6 == 0) {
          local_78 = 5;
          puVar11 = (ulonglong *)(param_1 + 0xb8);
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 5;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 2;
          puVar1 = (ulonglong *)(param_1 + 0xd0);
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) =
                   *(undefined4 *)(*puVar1 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
              FUN_14000c390(puVar1,1);
            }
            if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xd8) = 2;
            }
          }
          *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 4;
          local_78 = 0xffffffff;
          puVar2 = (ulonglong *)(param_1 + 0xe8);
          puVar8 = *(undefined4 **)(param_1 + 0xf0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar2, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) =
                   *(undefined4 *)(*puVar2 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 0xf8)) {
              FUN_14000c390(puVar2,1);
            }
            if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xf0) = 0xffffffff;
            }
          }
          *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 4;
          puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
          plVar13 = (longlong *)(param_1 + 0x100);
          puVar10 = *(undefined4 **)(param_1 + 0x108);
          if ((puVar8 < puVar10) && (puVar4 = (undefined4 *)*plVar13, puVar4 <= puVar8)) {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) =
                   *(undefined4 *)(*plVar13 + ((longlong)puVar8 - (longlong)puVar4 >> 2) * 4);
            }
          }
          else {
            if (puVar10 == *(undefined4 **)(param_1 + 0x110)) {
              FUN_140475070(plVar13);
            }
            if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x108) = *puVar8;
            }
          }
          *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
          local_78 = 5;
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 5;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 5;
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar1, puVar10 <= &local_78))
          goto LAB_140a37310;
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390(puVar1,1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) = 5;
          }
          goto LAB_140a37363;
        }
        iVar6 = FUN_14000c110(*(undefined8 *)(*plVar3 + lVar14 * 8),"TANNER");
        if (iVar6 == 0) {
          local_78 = 0xd;
          puVar11 = (ulonglong *)(param_1 + 0xb8);
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          if ((&local_78 < puVar8) && (puVar10 = (undefined4 *)*puVar11, puVar10 <= &local_78)) {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) =
                   *(undefined4 *)(*puVar11 + ((longlong)&local_78 - (longlong)puVar10 >> 2) * 4);
            }
          }
          else {
            if (puVar8 == *(undefined4 **)(param_1 + 200)) {
              FUN_14000c390(puVar11,1);
            }
            if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0xc0) = 0xd;
            }
          }
          *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 4;
          local_78 = 0xc;
          puVar8 = *(undefined4 **)(param_1 + 0xd8);
          if ((&local_78 < puVar8) &&
             (puVar10 = *(undefined4 **)(param_1 + 0xd0), puVar10 <= &local_78)) goto LAB_140a37512;
          if (puVar8 == *(undefined4 **)(param_1 + 0xe0)) {
            FUN_14000c390((ulonglong *)(param_1 + 0xd0),1);
          }
          if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xd8) = 0xc;
          }
          goto LAB_140a37565;
        }
        cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"KITCHEN");
        if (cVar5 == '\0') {
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"QUERN");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0x11;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"MILLSTONE");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0x16;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"STILL");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0xf;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"FARMER");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 1;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"CRAFTSMAN");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 3;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"MASON");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 2;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"ASHERY");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0x14;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"LEATHER");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0xb;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"BOWYER");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 7;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"SIEGE");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 9;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"CLOTHES");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0xd;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"CARPENTER");
          if (cVar5 != '\0') {
            local_78 = 0xd;
            FUN_14000bc60(param_1 + 0xb8,&local_78);
            local_78 = 0;
            goto LAB_140a3794d;
          }
          cVar5 = FUN_14000d730(*(undefined8 *)(*plVar3 + lVar14 * 8),"METALSMITH");
          if (cVar5 == '\0') {
            lVar9 = FUN_1402cd610(&DAT_141d77970,*(undefined8 *)(*plVar3 + lVar14 * 8));
            if (lVar9 == 0) {
              FUN_1400503d0(local_60,param_1);
              FUN_14000c1f0(local_60,": Unrecognized Building Token: ");
              FUN_140050380(local_60,*(undefined8 *)(*plVar3 + lVar14 * 8));
              FUN_14014a240(local_60);
              FUN_14000c260(local_60);
              goto LAB_140a37b0c;
            }
            FUN_14000bc60(param_1 + 0xb8,lVar9 + 0x50);
            FUN_14000bc60(param_1 + 0xd0,lVar9 + 0x54);
            FUN_14000bc60(param_1 + 0xe8,lVar9 + 0x28);
            goto LAB_140a37aaf;
          }
          local_78 = 0xd;
          FUN_14000bc60(param_1 + 0xb8,&local_78);
          local_78 = 5;
          FUN_14000bc60(param_1 + 0xd0,&local_78);
          local_78 = 0xffffffff;
          FUN_14000bc60(param_1 + 0xe8,&local_78);
          lVar14 = (longlong)local_74;
          FUN_140474fe0(param_1 + 0x100,*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
          local_78 = 0xd;
          FUN_14000bc60(param_1 + 0xb8,&local_78);
          local_78 = 6;
          FUN_14000bc60(param_1 + 0xd0,&local_78);
          local_78 = 0xffffffff;
          FUN_14000bc60(param_1 + 0xe8,&local_78);
          FUN_140474fe0(param_1 + 0x100,*(longlong *)(param_1 + 0xa0) + lVar14 * 4);
          lVar14 = local_70;
          iVar12 = local_74;
        }
        else {
          local_78 = 0xd;
          FUN_14000bc60(param_1 + 0xb8,&local_78);
          local_78 = 0x13;
LAB_140a3794d:
          FUN_14000bc60(param_1 + 0xd0,&local_78);
          local_78 = 0xffffffff;
          FUN_14000bc60(param_1 + 0xe8,&local_78);
LAB_140a37aaf:
          FUN_140474fe0(param_1 + 0x100,*(longlong *)(param_1 + 0xa0) + (longlong)iVar12 * 4);
        }
      }
LAB_140a37b0c:
      iVar12 = iVar12 + -1;
      lVar14 = lVar14 + -1;
      local_74 = iVar12;
      local_70 = lVar14;
    } while (-1 < iVar12);
  }
  FUN_140051e20(plVar3);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
  FUN_14014caa0(&DAT_141c3d418);
  return;
}

