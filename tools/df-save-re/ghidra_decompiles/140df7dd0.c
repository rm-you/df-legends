// FUN_140df7dd0 @ 140df7dd0
// callees:
//   -> 140df51a0 FUN_140df51a0
//   -> 140df51b0 FUN_140df51b0
//   -> 140df4ec0 FUN_140df4ec0
//   -> 140dfdcc6 memcpy
//   -> 140df94f0 FUN_140df94f0
//   -> 140df7680 FUN_140df7680
//   -> 140df7cd0 FUN_140df7cd0


int FUN_140df7dd0(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined1 *_Dst;
  ulonglong uVar17;
  byte *_Src;
  uint uVar18;
  uint uVar19;
  int local_res10;
  uint local_res18;
  undefined2 local_res20;
  undefined1 local_res22;
  undefined1 local_res23;
  byte bStack_67;
  uint local_64;
  undefined1 *local_58;
  
  if ((((param_1 == (longlong *)0x0) || (puVar3 = (uint *)param_1[5], puVar3 == (uint *)0x0)) ||
      (param_1[2] == 0)) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar3 == 0xb) {
    *puVar3 = 0xc;
  }
  uVar8 = *(uint *)(param_1 + 3);
  _Dst = (undefined1 *)param_1[2];
  uVar6 = *puVar3;
  uVar2 = *(uint *)(param_1 + 1);
  _Src = (byte *)*param_1;
  uVar19 = puVar3[0x10];
  uVar14 = puVar3[0x11];
  local_res10 = 0;
  local_res18 = uVar8;
  local_64 = uVar8;
  local_58 = _Dst;
  uVar15 = uVar2;
  do {
    if (0x1e < uVar6) {
      return -2;
    }
    uVar17 = 0;
    uVar18 = 0;
    uVar11 = uVar15;
    switch(uVar6) {
    case 0:
      if (puVar3[2] == 0) {
        *puVar3 = 0xc;
      }
      else {
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        if (((puVar3[2] & 2) == 0) || (uVar19 != 0x8b1f)) {
          puVar3[4] = 0;
          if (*(longlong *)(puVar3 + 8) != 0) {
            *(undefined4 *)(*(longlong *)(puVar3 + 8) + 0x40) = 0xffffffff;
          }
          if (((puVar3[2] & 1) == 0) ||
             (uVar6 = (uVar19 & 0xff) * 0x100 + (uVar19 >> 8), uVar6 != (uVar6 / 0x1f) * 0x1f)) {
            param_1[4] = (longlong)"incorrect header check";
            *puVar3 = 0x1d;
          }
          else {
            if (((byte)uVar19 & 0xf) != 8) goto LAB_140df7f7f;
            uVar14 = uVar14 - 4;
            uVar6 = (uVar19 >> 4 & 0xf) + 8;
            if (puVar3[10] == 0) {
              puVar3[10] = uVar6;
            }
            else if (puVar3[10] < uVar6) {
              param_1[4] = (longlong)"invalid window size";
              *puVar3 = 0x1d;
              uVar19 = uVar19 >> 4;
              break;
            }
            puVar3[5] = 1 << (sbyte)uVar6;
            uVar8 = FUN_140df4ec0(0,0,0);
            uVar14 = 0;
            puVar3[6] = uVar8;
            *(uint *)((longlong)param_1 + 0x4c) = uVar8;
            *puVar3 = ~(uVar19 >> 0xc) & 2 | 9;
            uVar19 = 0;
            _Dst = local_58;
            uVar8 = local_res18;
          }
        }
        else {
          uVar8 = FUN_140df51a0(0,0,0);
          puVar3[6] = uVar8;
          local_res20 = 0x8b1f;
          uVar8 = FUN_140df51b0(uVar8,&local_res20,2);
          puVar3[6] = uVar8;
          uVar19 = 0;
          uVar14 = 0;
          *puVar3 = 1;
          _Dst = local_58;
          uVar8 = local_res18;
        }
      }
      break;
    case 1:
      for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
        uVar11 = 0;
        if (uVar15 == 0) goto LAB_140df9335;
        uVar15 = uVar15 - 1;
        uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
        _Src = _Src + 1;
      }
      puVar3[4] = uVar19;
      if ((char)uVar19 == '\b') {
        if ((uVar19 & 0xe000) == 0) {
          if (*(uint **)(puVar3 + 8) != (uint *)0x0) {
            **(uint **)(puVar3 + 8) = uVar19 >> 8 & 1;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_res20 = (undefined2)uVar19;
            uVar8 = FUN_140df51b0(puVar3[6],&local_res20);
            puVar3[6] = uVar8;
          }
          *puVar3 = 2;
          uVar19 = uVar18;
          uVar14 = uVar18;
          do {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar15 = uVar15 - 1;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            _Src = _Src + 1;
            uVar14 = uVar14 + 8;
joined_r0x000140df80cb:
          } while (uVar14 < 0x20);
          if (*(longlong *)(puVar3 + 8) != 0) {
            *(uint *)(*(longlong *)(puVar3 + 8) + 4) = uVar19;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_res20 = (undefined2)uVar19;
            local_res22 = (undefined1)(uVar19 >> 0x10);
            local_res23 = (undefined1)(uVar19 >> 0x18);
            uVar8 = FUN_140df51b0(puVar3[6],&local_res20);
            puVar3[6] = uVar8;
          }
          *puVar3 = 3;
          uVar19 = uVar18;
          uVar14 = uVar18;
          do {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar15 = uVar15 - 1;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            _Src = _Src + 1;
            uVar14 = uVar14 + 8;
joined_r0x000140df814f:
          } while (uVar14 < 0x10);
          if (*(longlong *)(puVar3 + 8) != 0) {
            *(uint *)(*(longlong *)(puVar3 + 8) + 8) = uVar19 & 0xff;
            *(uint *)(*(longlong *)(puVar3 + 8) + 0xc) = uVar19 >> 8;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_res20 = (undefined2)uVar19;
            uVar8 = FUN_140df51b0(puVar3[6],&local_res20);
            puVar3[6] = uVar8;
          }
          *puVar3 = 4;
          uVar19 = uVar18;
          uVar14 = uVar18;
          goto switchD_140df7ea1_caseD_4;
        }
        param_1[4] = (longlong)"unknown header flags set";
        *puVar3 = 0x1d;
      }
      else {
LAB_140df7f7f:
        param_1[4] = (longlong)"unknown compression method";
        *puVar3 = 0x1d;
      }
      break;
    case 2:
      goto joined_r0x000140df80cb;
    case 3:
      goto joined_r0x000140df814f;
    case 4:
switchD_140df7ea1_caseD_4:
      if ((puVar3[4] & 0x400) == 0) {
        uVar8 = uVar19;
        if (*(longlong *)(puVar3 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(puVar3 + 8) + 0x10) = 0;
        }
      }
      else {
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        puVar3[0x12] = uVar19;
        if (*(longlong *)(puVar3 + 8) != 0) {
          *(uint *)(*(longlong *)(puVar3 + 8) + 0x18) = uVar19;
        }
        uVar8 = uVar18;
        uVar14 = uVar18;
        if ((puVar3[4] & 0x200) != 0) {
          local_res20 = (undefined2)uVar19;
          uVar6 = FUN_140df51b0(puVar3[6],&local_res20);
          puVar3[6] = uVar6;
        }
      }
      uVar19 = uVar8;
      *puVar3 = 5;
    case 5:
      if ((puVar3[4] & 0x400) == 0) {
LAB_140df82e4:
        puVar3[0x12] = 0;
        *puVar3 = 6;
switchD_140df7ea1_caseD_6:
        if ((puVar3[4] & 0x800) == 0) {
          if (*(longlong *)(puVar3 + 8) != 0) {
            *(undefined8 *)(*(longlong *)(puVar3 + 8) + 0x20) = 0;
          }
LAB_140df838d:
          puVar3[0x12] = 0;
          *puVar3 = 7;
switchD_140df7ea1_caseD_7:
          uVar17 = 0;
          if ((puVar3[4] & 0x1000) == 0) {
            if (*(longlong *)(puVar3 + 8) != 0) {
              *(undefined8 *)(*(longlong *)(puVar3 + 8) + 0x30) = 0;
            }
LAB_140df842d:
            *puVar3 = 8;
            _Dst = local_58;
            uVar8 = local_res18;
switchD_140df7ea1_caseD_8:
            if ((puVar3[4] & 0x200) != 0) {
              for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
                uVar11 = 0;
                if (uVar15 == 0) goto LAB_140df9335;
                uVar15 = uVar15 - 1;
                uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
                _Src = _Src + 1;
              }
              if (uVar19 != (ushort)puVar3[6]) {
                param_1[4] = (longlong)"header crc mismatch";
                *puVar3 = 0x1d;
                break;
              }
              uVar19 = 0;
              uVar14 = uVar19;
            }
            if (*(longlong *)(puVar3 + 8) != 0) {
              *(uint *)(*(longlong *)(puVar3 + 8) + 0x3c) = (int)puVar3[4] >> 9 & 1;
              *(undefined4 *)(*(longlong *)(puVar3 + 8) + 0x40) = 1;
            }
            uVar8 = FUN_140df51a0(0,0,0);
            puVar3[6] = uVar8;
            *(uint *)((longlong)param_1 + 0x4c) = uVar8;
LAB_140df84c9:
            *puVar3 = 0xb;
            _Dst = local_58;
            uVar8 = local_res18;
            break;
          }
          uVar11 = uVar15;
          if (uVar15 != 0) {
            do {
              uVar8 = (int)uVar17 + 1;
              bVar1 = _Src[uVar17];
              lVar13 = *(longlong *)(puVar3 + 8);
              if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) &&
                 (puVar3[0x12] < *(uint *)(lVar13 + 0x38))) {
                *(byte *)((ulonglong)puVar3[0x12] + *(longlong *)(lVar13 + 0x30)) = bVar1;
                puVar3[0x12] = puVar3[0x12] + 1;
              }
            } while ((bVar1 != 0) && (uVar17 = (ulonglong)uVar8, uVar8 < uVar15));
            if ((puVar3[4] & 0x200) != 0) {
              if (_Src == (byte *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_140df51b0(puVar3[6],_Src);
              }
              puVar3[6] = uVar6;
            }
            uVar15 = uVar15 - uVar8;
            _Src = _Src + uVar8;
            uVar11 = uVar15;
            if (bVar1 == 0) goto LAB_140df842d;
          }
        }
        else {
          uVar11 = uVar15;
          if (uVar15 != 0) {
            do {
              uVar8 = (int)uVar17 + 1;
              bVar1 = _Src[uVar17];
              lVar13 = *(longlong *)(puVar3 + 8);
              if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x20) != 0)) &&
                 (puVar3[0x12] < *(uint *)(lVar13 + 0x28))) {
                *(byte *)((ulonglong)puVar3[0x12] + *(longlong *)(lVar13 + 0x20)) = bVar1;
                puVar3[0x12] = puVar3[0x12] + 1;
              }
            } while ((bVar1 != 0) && (uVar17 = (ulonglong)uVar8, uVar8 < uVar15));
            if ((puVar3[4] & 0x200) != 0) {
              if (_Src == (byte *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_140df51b0(puVar3[6],_Src);
              }
              puVar3[6] = uVar6;
            }
            uVar11 = uVar15 - uVar8;
            _Src = _Src + uVar8;
            uVar15 = uVar11;
            if (bVar1 == 0) goto LAB_140df838d;
          }
        }
      }
      else {
        uVar8 = puVar3[0x12];
        uVar6 = uVar8;
        if (uVar15 < uVar8) {
          uVar6 = uVar15;
        }
        uVar11 = uVar15;
        if (uVar6 != 0) {
          lVar13 = *(longlong *)(puVar3 + 8);
          if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x10) != 0)) {
            uVar8 = *(int *)(lVar13 + 0x18) - uVar8;
            uVar11 = uVar6;
            if (*(uint *)(lVar13 + 0x1c) < uVar6 + uVar8) {
              uVar11 = *(uint *)(lVar13 + 0x1c) - uVar8;
            }
            memcpy((void *)((ulonglong)uVar8 + *(longlong *)(lVar13 + 0x10)),_Src,(ulonglong)uVar11)
            ;
          }
          if ((puVar3[4] & 0x200) != 0) {
            if (_Src != (byte *)0x0) {
              uVar18 = FUN_140df51b0(puVar3[6],_Src);
            }
            puVar3[6] = uVar18;
          }
          uVar11 = uVar15 - uVar6;
          _Src = _Src + uVar6;
          puVar3[0x12] = puVar3[0x12] - uVar6;
        }
        uVar15 = uVar11;
        if (puVar3[0x12] == 0) goto LAB_140df82e4;
      }
LAB_140df9335:
      param_1[2] = (longlong)local_58;
      *(uint *)(param_1 + 3) = local_res18;
      *param_1 = (longlong)_Src;
      *(uint *)(param_1 + 1) = uVar11;
      puVar3[0x11] = uVar14;
      puVar3[0x10] = uVar19;
      if (((puVar3[0xb] == 0) && ((0x19 < (int)*puVar3 || (local_64 == *(uint *)(param_1 + 3))))) ||
         (iVar7 = FUN_140df7cd0(param_1,local_64), iVar7 == 0)) {
        local_64 = local_64 - (int)param_1[3];
        iVar7 = uVar2 - (int)param_1[1];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar7;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_64;
        puVar3[7] = puVar3[7] + local_64;
        if ((puVar3[2] != 0) && (local_64 != 0)) {
          if (puVar3[4] == 0) {
            uVar8 = FUN_140df4ec0(puVar3[6],param_1[2] - (ulonglong)local_64);
          }
          else if (param_1[2] == (ulonglong)local_64) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_140df51b0();
          }
          puVar3[6] = uVar8;
          *(uint *)((longlong)param_1 + 0x4c) = uVar8;
        }
        uVar8 = *puVar3;
        if ((uVar8 == 0x13) || (uVar8 == 0xe)) {
          iVar5 = 0x100;
        }
        else {
          iVar5 = 0;
        }
        iVar12 = 0;
        if (uVar8 == 0xb) {
          iVar12 = 0x80;
        }
        *(uint *)(param_1 + 9) = iVar12 + iVar5 + (-(uint)(puVar3[1] != 0) & 0x40) + puVar3[0x11];
        if (iVar7 != 0) {
          return local_res10;
        }
        if (local_64 != 0) {
          return local_res10;
        }
        if (local_res10 != 0) {
          return local_res10;
        }
        return -5;
      }
      *puVar3 = 0x1e;
LAB_140df92ee:
      return -4;
    case 6:
      goto switchD_140df7ea1_caseD_6;
    case 7:
      goto switchD_140df7ea1_caseD_7;
    case 8:
      goto switchD_140df7ea1_caseD_8;
    case 9:
      for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
        uVar11 = 0;
        if (uVar15 == 0) goto LAB_140df9335;
        uVar15 = uVar15 - 1;
        uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
        _Src = _Src + 1;
      }
      uVar6 = (uVar19 >> 8 & 0xff00) + ((uVar19 & 0xff00) + uVar19 * 0x10000) * 0x100 +
              (uVar19 >> 0x18);
      puVar3[6] = uVar6;
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      *puVar3 = 10;
      uVar19 = uVar18;
      uVar14 = uVar18;
    case 10:
      if (puVar3[3] == 0) {
        param_1[2] = (longlong)_Dst;
        *(uint *)(param_1 + 3) = uVar8;
        *param_1 = (longlong)_Src;
        *(uint *)(param_1 + 1) = uVar15;
        puVar3[0x10] = uVar19;
        puVar3[0x11] = uVar14;
        return 2;
      }
      uVar8 = FUN_140df4ec0(0,0,0);
      puVar3[6] = uVar8;
      *(uint *)((longlong)param_1 + 0x4c) = uVar8;
      *puVar3 = 0xb;
      _Dst = local_58;
      uVar8 = local_res18;
switchD_140df7ea1_caseD_b:
      if (puVar3[1] == 0) {
        for (; uVar14 < 3; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        puVar3[1] = uVar19 & 1;
        uVar6 = uVar19 >> 1 & 3;
        if (uVar6 == 0) {
          *puVar3 = 0xd;
LAB_140df8668:
          uVar14 = uVar14 - 3;
          uVar19 = uVar19 >> 3;
        }
        else if (uVar6 == 1) {
          *(undefined **)(puVar3 + 0x16) = &DAT_140e7da40;
          uVar14 = uVar14 - 3;
          puVar3[0x1a] = 9;
          *(undefined **)(puVar3 + 0x18) = &DAT_140e7d9c0;
          puVar3[0x1b] = 5;
          *puVar3 = 0x13;
          uVar19 = uVar19 >> 3;
        }
        else if (uVar6 == 2) {
          uVar14 = uVar14 - 3;
          *puVar3 = 0x10;
          uVar19 = uVar19 >> 3;
        }
        else {
          if (uVar6 != 3) goto LAB_140df8668;
          param_1[4] = (longlong)"invalid block type";
          uVar14 = uVar14 - 3;
          *puVar3 = 0x1d;
          uVar19 = uVar19 >> 3;
        }
      }
      else {
        *puVar3 = 0x1a;
        uVar6 = uVar14 & 7;
        uVar14 = uVar14 - uVar6;
        uVar19 = uVar19 >> (sbyte)uVar6;
      }
      break;
    default:
      goto switchD_140df7ea1_caseD_b;
    case 0xd:
      uVar19 = uVar19 >> (sbyte)(uVar14 & 7);
      for (uVar14 = uVar14 - (uVar14 & 7); uVar14 < 0x20; uVar14 = uVar14 + 8) {
        uVar11 = 0;
        if (uVar15 == 0) goto LAB_140df9335;
        uVar15 = uVar15 - 1;
        uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
        _Src = _Src + 1;
      }
      if ((uVar19 & 0xffff) == ~uVar19 >> 0x10) {
        puVar3[0x12] = uVar19 & 0xffff;
        *puVar3 = 0xe;
        uVar19 = uVar18;
        uVar14 = uVar18;
        goto switchD_140df7ea1_caseD_e;
      }
      param_1[4] = (longlong)"invalid stored block lengths";
      *puVar3 = 0x1d;
      break;
    case 0xe:
switchD_140df7ea1_caseD_e:
      *puVar3 = 0xf;
    case 0xf:
      uVar6 = puVar3[0x12];
      if (uVar6 == 0) {
        *puVar3 = 0xb;
        break;
      }
      if (uVar15 < uVar6) {
        uVar6 = uVar15;
      }
      if (uVar8 < uVar6) {
        uVar6 = uVar8;
      }
      uVar17 = (ulonglong)uVar6;
      uVar11 = uVar15;
      if (uVar6 != 0) {
        memcpy(_Dst,_Src,uVar17);
        _Src = _Src + uVar17;
        local_res18 = local_res18 - uVar6;
        local_58 = local_58 + uVar17;
        uVar15 = uVar15 - uVar6;
        puVar3[0x12] = puVar3[0x12] - uVar6;
        _Dst = local_58;
        uVar8 = local_res18;
        break;
      }
      goto LAB_140df9335;
    case 0x10:
      for (; uVar14 < 0xe; uVar14 = uVar14 + 8) {
        uVar11 = 0;
        if (uVar15 == 0) goto LAB_140df9335;
        uVar15 = uVar15 - 1;
        uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
        _Src = _Src + 1;
      }
      uVar14 = uVar14 - 0xe;
      uVar11 = uVar19 >> 5;
      uVar6 = (uVar19 & 0x1f) + 0x101;
      uVar18 = uVar19 >> 10;
      puVar3[0x1d] = uVar6;
      uVar19 = uVar19 >> 0xe;
      uVar11 = (uVar11 & 0x1f) + 1;
      puVar3[0x1e] = uVar11;
      puVar3[0x1c] = (uVar18 & 0xf) + 4;
      if ((uVar6 < 0x11f) && (uVar11 < 0x1f)) {
        puVar3[0x1f] = 0;
        *puVar3 = 0x11;
        goto switchD_140df7ea1_caseD_11;
      }
      param_1[4] = (longlong)"too many length or distance symbols";
      *puVar3 = 0x1d;
      break;
    case 0x11:
switchD_140df7ea1_caseD_11:
      if (puVar3[0x1f] < puVar3[0x1c]) {
        do {
          for (; uVar14 < 3; uVar14 = uVar14 + 8) {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar15 = uVar15 - 1;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            _Src = _Src + 1;
          }
          uVar9 = (ushort)uVar19;
          uVar19 = uVar19 >> 3;
          uVar14 = uVar14 - 3;
          *(ushort *)
           ((longlong)puVar3 +
           (ulonglong)*(ushort *)(&DAT_140e7d118 + (ulonglong)puVar3[0x1f] * 2) * 2 + 0x88) =
               uVar9 & 7;
          puVar3[0x1f] = puVar3[0x1f] + 1;
        } while (puVar3[0x1f] < puVar3[0x1c]);
      }
      uVar8 = puVar3[0x1f];
      while (uVar8 < 0x13) {
        *(undefined2 *)
         ((longlong)puVar3 +
         (ulonglong)*(ushort *)(&DAT_140e7d118 + (ulonglong)puVar3[0x1f] * 2) * 2 + 0x88) = 0;
        puVar3[0x1f] = puVar3[0x1f] + 1;
        uVar8 = puVar3[0x1f];
      }
      puVar3[0x1a] = 7;
      *(uint **)(puVar3 + 0x16) = puVar3 + 0x152;
      *(uint **)(puVar3 + 0x20) = puVar3 + 0x152;
      local_res10 = FUN_140df94f0(0,puVar3 + 0x22,0x13,puVar3 + 0x20,puVar3 + 0x1a,puVar3 + 0xc2);
      if (local_res10 == 0) {
        puVar3[0x1f] = 0;
        *puVar3 = 0x12;
        uVar8 = local_res18;
        goto switchD_140df7ea1_caseD_12;
      }
      param_1[4] = (longlong)"invalid code lengths set";
      *puVar3 = 0x1d;
      _Dst = local_58;
      uVar8 = local_res18;
      break;
    case 0x12:
switchD_140df7ea1_caseD_12:
      uVar6 = puVar3[0x1f];
      if (uVar6 < puVar3[0x1e] + puVar3[0x1d]) {
        do {
          uVar18 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                            (ulonglong)((1 << ((byte)puVar3[0x1a] & 0x1f)) - 1U & uVar19) * 4);
          if (uVar14 < (uVar18 >> 8 & 0xff)) {
            do {
              uVar11 = 0;
              if (uVar15 == 0) goto LAB_140df9335;
              uVar15 = uVar15 - 1;
              uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
              _Src = _Src + 1;
              uVar14 = uVar14 + 8;
              uVar18 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                                (ulonglong)((1 << ((byte)puVar3[0x1a] & 0x1f)) - 1U & uVar19) * 4);
            } while (uVar14 < (uVar18 >> 8 & 0xff));
          }
          uVar9 = (ushort)(uVar18 >> 0x10);
          bStack_67 = (byte)(uVar18 >> 8);
          if (0xf < uVar9) {
            if (uVar9 == 0x10) {
              for (; uVar14 < bStack_67 + 2; uVar14 = uVar14 + 8) {
                uVar11 = 0;
                if (uVar15 == 0) goto LAB_140df9335;
                uVar15 = uVar15 - 1;
                uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
                _Src = _Src + 1;
              }
              uVar14 = uVar14 - bStack_67;
              uVar19 = uVar19 >> (bStack_67 & 0x1f);
              if (uVar6 != 0) {
                iVar7 = (uVar19 & 3) + 3;
                uVar19 = uVar19 >> 2;
                uVar14 = uVar14 - 2;
                uVar16 = *(undefined2 *)((longlong)puVar3 + (ulonglong)(uVar6 - 1) * 2 + 0x88);
                goto LAB_140df8ad0;
              }
            }
            else {
              if (uVar9 == 0x11) {
                for (; uVar14 < bStack_67 + 3; uVar14 = uVar14 + 8) {
                  uVar11 = 0;
                  if (uVar15 == 0) goto LAB_140df9335;
                  uVar15 = uVar15 - 1;
                  uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
                  _Src = _Src + 1;
                }
                iVar5 = -3;
                uVar19 = uVar19 >> (bStack_67 & 0x1f);
                iVar7 = (uVar19 & 7) + 3;
                uVar19 = uVar19 >> 3;
              }
              else {
                for (; uVar14 < bStack_67 + 7; uVar14 = uVar14 + 8) {
                  uVar11 = 0;
                  if (uVar15 == 0) goto LAB_140df9335;
                  uVar15 = uVar15 - 1;
                  uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
                  _Src = _Src + 1;
                }
                iVar5 = -7;
                uVar19 = uVar19 >> (bStack_67 & 0x1f);
                iVar7 = (uVar19 & 0x7f) + 0xb;
                uVar19 = uVar19 >> 7;
              }
              uVar14 = uVar14 + (iVar5 - (uint)bStack_67);
              uVar16 = 0;
LAB_140df8ad0:
              if (uVar6 + iVar7 <= puVar3[0x1e] + puVar3[0x1d]) {
                for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined2 *)((longlong)puVar3 + (ulonglong)puVar3[0x1f] * 2 + 0x88) = uVar16;
                  puVar3[0x1f] = puVar3[0x1f] + 1;
                }
                goto LAB_140df8b0a;
              }
            }
            param_1[4] = (longlong)"invalid bit length repeat";
            *puVar3 = 0x1d;
            _Dst = local_58;
            goto LAB_140df84d9;
          }
          for (; uVar14 < (uVar18 >> 8 & 0xff); uVar14 = uVar14 + 8) {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar15 = uVar15 - 1;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            _Src = _Src + 1;
          }
          uVar14 = uVar14 - bStack_67;
          uVar19 = uVar19 >> (bStack_67 & 0x1f);
          *(ushort *)((longlong)puVar3 + (ulonglong)uVar6 * 2 + 0x88) = uVar9;
          puVar3[0x1f] = puVar3[0x1f] + 1;
LAB_140df8b0a:
          uVar6 = puVar3[0x1f];
        } while (uVar6 < puVar3[0x1e] + puVar3[0x1d]);
      }
      _Dst = local_58;
      if (*puVar3 != 0x1d) {
        if ((short)puVar3[0xa2] == 0) {
          param_1[4] = (longlong)"invalid code -- missing end-of-block";
          *puVar3 = 0x1d;
        }
        else {
          puVar3[0x1a] = 9;
          *(uint **)(puVar3 + 0x20) = puVar3 + 0x152;
          *(uint **)(puVar3 + 0x16) = puVar3 + 0x152;
          local_res10 = FUN_140df94f0(1,puVar3 + 0x22,puVar3[0x1d],puVar3 + 0x20,puVar3 + 0x1a,
                                      puVar3 + 0xc2);
          if (local_res10 == 0) {
            *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(puVar3 + 0x20);
            puVar3[0x1b] = 6;
            local_res10 = FUN_140df94f0(2,(ulonglong)puVar3[0x1d] * 2 + 0x88 + (longlong)puVar3,
                                        puVar3[0x1e],puVar3 + 0x20,puVar3 + 0x1b,puVar3 + 0xc2);
            if (local_res10 == 0) {
              *puVar3 = 0x13;
              uVar8 = local_res18;
              goto switchD_140df7ea1_caseD_13;
            }
            param_1[4] = (longlong)"invalid distances set";
            *puVar3 = 0x1d;
            uVar8 = local_res18;
          }
          else {
            param_1[4] = (longlong)"invalid literal/lengths set";
            *puVar3 = 0x1d;
            uVar8 = local_res18;
          }
        }
      }
      break;
    case 0x13:
switchD_140df7ea1_caseD_13:
      *puVar3 = 0x14;
    case 0x14:
      if ((5 < uVar15) && (0x101 < uVar8)) {
        param_1[2] = (longlong)_Dst;
        *(uint *)(param_1 + 3) = uVar8;
        *param_1 = (longlong)_Src;
        *(uint *)(param_1 + 1) = uVar15;
        puVar3[0x10] = uVar19;
        puVar3[0x11] = uVar14;
        FUN_140df7680(param_1,local_64);
        local_58 = (undefined1 *)param_1[2];
        local_res18 = *(uint *)(param_1 + 3);
        _Src = (byte *)*param_1;
        uVar15 = *(uint *)(param_1 + 1);
        uVar14 = puVar3[0x11];
        _Dst = local_58;
        uVar8 = local_res18;
        uVar19 = puVar3[0x10];
        if (*puVar3 == 0xb) {
          puVar3[0x6f7] = 0xffffffff;
        }
        break;
      }
      puVar3[0x6f7] = 0;
      uVar8 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                       (ulonglong)((1 << ((byte)puVar3[0x1a] & 0x1f)) - 1U & uVar19) * 4);
      if (uVar14 < (uVar8 >> 8 & 0xff)) {
        do {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
          uVar14 = uVar14 + 8;
          uVar8 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                           (ulonglong)((1 << ((byte)puVar3[0x1a] & 0x1f)) - 1U & uVar19) * 4);
        } while (uVar14 < (uVar8 >> 8 & 0xff));
      }
      cVar4 = (char)uVar8;
      if ((cVar4 != '\0') && ((uVar8 & 0xf0) == 0)) {
        bVar1 = (byte)(uVar8 >> 8);
        uVar6 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                         (ulonglong)
                         ((((1 << (cVar4 + bVar1 & 0x1f)) - 1U & uVar19) >> (bVar1 & 0x1f)) +
                         (uVar8 >> 0x10)) * 4);
        if (uVar14 < (uVar6 >> 8 & 0xff) + (uVar8 >> 8 & 0xff)) {
          do {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            uVar15 = uVar15 - 1;
            _Src = _Src + 1;
            uVar14 = uVar14 + 8;
            uVar6 = *(uint *)(*(longlong *)(puVar3 + 0x16) +
                             (ulonglong)
                             ((((1 << (cVar4 + bVar1 & 0x1f)) - 1U & uVar19) >> (bVar1 & 0x1f)) +
                             (uVar8 >> 0x10)) * 4);
          } while (uVar14 < (uVar6 >> 8 & 0xff) + (uint)bVar1);
        }
        uVar8 = uVar6;
        uVar19 = uVar19 >> (bVar1 & 0x1f);
        uVar14 = uVar14 - bVar1;
        puVar3[0x6f7] = (uint)bVar1;
      }
      uVar6 = uVar8 >> 8 & 0xff;
      puVar3[0x6f7] = puVar3[0x6f7] + uVar6;
      uVar14 = uVar14 - uVar6;
      uVar19 = uVar19 >> ((byte)(uVar8 >> 8) & 0x1f);
      puVar3[0x12] = uVar8 >> 0x10;
      if ((char)uVar8 == '\0') {
        *puVar3 = 0x19;
        _Dst = local_58;
        uVar8 = local_res18;
        break;
      }
      if ((uVar8 & 0x20) != 0) {
        puVar3[0x6f7] = 0xffffffff;
        goto LAB_140df84c9;
      }
      if ((uVar8 & 0x40) != 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *puVar3 = 0x1d;
        _Dst = local_58;
        uVar8 = local_res18;
        break;
      }
      *puVar3 = 0x15;
      puVar3[0x14] = uVar8 & 0xf;
switchD_140df7ea1_caseD_15:
      uVar8 = puVar3[0x14];
      if (uVar8 != 0) {
        for (; uVar14 < uVar8; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        uVar14 = uVar14 - uVar8;
        uVar6 = (1 << ((byte)uVar8 & 0x1f)) - 1U & uVar19;
        uVar19 = uVar19 >> ((byte)uVar8 & 0x1f);
        puVar3[0x12] = puVar3[0x12] + uVar6;
        puVar3[0x6f7] = puVar3[0x6f7] + uVar8;
      }
      puVar3[0x6f8] = puVar3[0x12];
      *puVar3 = 0x16;
switchD_140df7ea1_caseD_16:
      uVar8 = *(uint *)(*(longlong *)(puVar3 + 0x18) +
                       (ulonglong)((1 << ((byte)puVar3[0x1b] & 0x1f)) - 1U & uVar19) * 4);
      if (uVar14 < (uVar8 >> 8 & 0xff)) {
        do {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
          uVar14 = uVar14 + 8;
          uVar8 = *(uint *)(*(longlong *)(puVar3 + 0x18) +
                           (ulonglong)((1 << ((byte)puVar3[0x1b] & 0x1f)) - 1U & uVar19) * 4);
        } while (uVar14 < (uVar8 >> 8 & 0xff));
      }
      if ((uVar8 & 0xf0) == 0) {
        bVar1 = (byte)(uVar8 >> 8);
        uVar6 = *(uint *)(*(longlong *)(puVar3 + 0x18) +
                         (ulonglong)
                         ((((1 << ((char)uVar8 + bVar1 & 0x1f)) - 1U & uVar19) >> (bVar1 & 0x1f)) +
                         (uVar8 >> 0x10)) * 4);
        if (uVar14 < (uVar6 >> 8 & 0xff) + (uVar8 >> 8 & 0xff)) {
          do {
            uVar11 = 0;
            if (uVar15 == 0) goto LAB_140df9335;
            uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
            uVar15 = uVar15 - 1;
            _Src = _Src + 1;
            uVar14 = uVar14 + 8;
            uVar6 = *(uint *)(*(longlong *)(puVar3 + 0x18) +
                             (ulonglong)
                             ((((1 << ((char)uVar8 + bVar1 & 0x1f)) - 1U & uVar19) >> (bVar1 & 0x1f)
                              ) + (uVar8 >> 0x10)) * 4);
          } while (uVar14 < (uVar6 >> 8 & 0xff) + (uint)bVar1);
        }
        uVar8 = uVar6;
        uVar19 = uVar19 >> (bVar1 & 0x1f);
        uVar14 = uVar14 - bVar1;
        puVar3[0x6f7] = puVar3[0x6f7] + (uint)bVar1;
      }
      uVar6 = uVar8 >> 8 & 0xff;
      puVar3[0x6f7] = puVar3[0x6f7] + uVar6;
      uVar14 = uVar14 - uVar6;
      uVar19 = uVar19 >> ((byte)(uVar8 >> 8) & 0x1f);
      if ((uVar8 & 0x40) != 0) {
        param_1[4] = (longlong)"invalid distance code";
        *puVar3 = 0x1d;
        _Dst = local_58;
        uVar8 = local_res18;
        break;
      }
      puVar3[0x13] = uVar8 >> 0x10;
      *puVar3 = 0x17;
      puVar3[0x14] = uVar8 & 0xf;
      _Dst = local_58;
      uVar8 = local_res18;
switchD_140df7ea1_caseD_17:
      uVar6 = puVar3[0x14];
      if (uVar6 != 0) {
        for (; uVar14 < uVar6; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        uVar14 = uVar14 - uVar6;
        uVar11 = (1 << ((byte)uVar6 & 0x1f)) - 1U & uVar19;
        uVar19 = uVar19 >> ((byte)uVar6 & 0x1f);
        puVar3[0x13] = puVar3[0x13] + uVar11;
        puVar3[0x6f7] = puVar3[0x6f7] + uVar6;
      }
      *puVar3 = 0x18;
switchD_140df7ea1_caseD_18:
      uVar11 = uVar15;
      if (uVar8 != 0) {
        uVar6 = puVar3[0x13];
        if (local_64 - uVar8 < uVar6) {
          uVar6 = uVar6 - (local_64 - uVar8);
          if ((puVar3[0xc] < uVar6) && (puVar3[0x6f6] != 0)) {
            param_1[4] = (longlong)"invalid distance too far back";
            *puVar3 = 0x1d;
            break;
          }
          uVar11 = puVar3[0xd];
          if (uVar11 < uVar6) {
            uVar6 = uVar6 - uVar11;
            uVar11 = puVar3[0xb] - uVar6;
          }
          else {
            uVar11 = uVar11 - uVar6;
          }
          lVar13 = (ulonglong)uVar11 + *(longlong *)(puVar3 + 0xe);
          uVar11 = puVar3[0x12];
          if (uVar11 < uVar6) goto LAB_140df9124;
        }
        else {
          lVar13 = (longlong)_Dst - (ulonglong)uVar6;
          uVar11 = puVar3[0x12];
LAB_140df9124:
          uVar6 = uVar11;
          uVar11 = uVar6;
        }
        if (uVar8 < uVar6) {
          uVar6 = uVar8;
        }
        local_res18 = uVar8 - uVar6;
        lVar13 = lVar13 - (longlong)_Dst;
        puVar3[0x12] = uVar11 - uVar6;
        do {
          *_Dst = _Dst[lVar13];
          _Dst = _Dst + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar8 = local_res18;
        local_58 = _Dst;
        if (puVar3[0x12] == 0) {
          *puVar3 = 0x14;
        }
        break;
      }
      goto LAB_140df9335;
    case 0x15:
      goto switchD_140df7ea1_caseD_15;
    case 0x16:
      goto switchD_140df7ea1_caseD_16;
    case 0x17:
      goto switchD_140df7ea1_caseD_17;
    case 0x18:
      goto switchD_140df7ea1_caseD_18;
    case 0x19:
      if (uVar8 == 0) goto LAB_140df9335;
      *_Dst = (char)puVar3[0x12];
      _Dst = _Dst + 1;
      local_res18 = uVar8 - 1;
      *puVar3 = 0x14;
      uVar8 = local_res18;
      local_58 = _Dst;
      break;
    case 0x1a:
      uVar6 = uVar19;
      uVar11 = uVar14;
      if (puVar3[2] != 0) {
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        local_64 = local_64 - uVar8;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_64;
        puVar3[7] = puVar3[7] + local_64;
        if (local_64 != 0) {
          if (puVar3[4] == 0) {
            uVar6 = FUN_140df4ec0(puVar3[6],(longlong)_Dst - (longlong)(ulonglong)local_64);
            _Dst = local_58;
            uVar8 = local_res18;
          }
          else {
            uVar6 = uVar18;
            if (_Dst != (undefined1 *)(ulonglong)local_64) {
              uVar6 = FUN_140df51b0(puVar3[6]);
              _Dst = local_58;
              uVar8 = local_res18;
            }
          }
          puVar3[6] = uVar6;
          *(uint *)((longlong)param_1 + 0x4c) = uVar6;
        }
        uVar10 = uVar19;
        if (puVar3[4] == 0) {
          uVar10 = ((uVar19 & 0xff00) + uVar19 * 0x10000) * 0x100 + (uVar19 >> 8 & 0xff00) +
                   (uVar19 >> 0x18);
        }
        uVar6 = uVar18;
        uVar11 = uVar18;
        local_64 = uVar8;
        if (uVar10 != puVar3[6]) {
          param_1[4] = (longlong)"incorrect data check";
          *puVar3 = 0x1d;
          break;
        }
      }
      uVar14 = uVar11;
      uVar19 = uVar6;
      *puVar3 = 0x1b;
    case 0x1b:
      uVar6 = uVar19;
      uVar11 = uVar14;
      if ((puVar3[2] != 0) && (puVar3[4] != 0)) {
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar11 = 0;
          if (uVar15 == 0) goto LAB_140df9335;
          uVar15 = uVar15 - 1;
          uVar19 = uVar19 + ((uint)*_Src << ((byte)uVar14 & 0x1f));
          _Src = _Src + 1;
        }
        uVar6 = uVar18;
        uVar11 = uVar18;
        if (uVar19 != puVar3[7]) {
          param_1[4] = (longlong)"incorrect length check";
          *puVar3 = 0x1d;
          break;
        }
      }
      uVar14 = uVar11;
      uVar19 = uVar6;
      *puVar3 = 0x1c;
switchD_140df7ea1_caseD_1c:
      local_res10 = 1;
      uVar11 = uVar15;
      goto LAB_140df9335;
    case 0x1c:
      goto switchD_140df7ea1_caseD_1c;
    case 0x1d:
      local_res10 = -3;
      goto LAB_140df9335;
    case 0x1e:
      goto LAB_140df92ee;
    }
LAB_140df84d9:
    uVar6 = *puVar3;
  } while( true );
}

