// FUN_1404567a0 @ 1404567a0
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 140d89d60 FUN_140d89d60
//   -> 140280490 FUN_140280490
//   -> 140002020 FUN_140002020
//   -> 140071310 FUN_140071310
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool FUN_1404567a0(undefined2 param_1,short param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  lVar7 = DAT_141d6ddd0;
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  switch(param_1) {
  case 0:
    if (param_3 == 0) {
      return true;
    }
    if ((int)param_3 - 7U < 4) {
      return true;
    }
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    FUN_14000c780(&local_88,&DAT_140ed12bc,4);
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = FUN_140280490(lVar7 + 0x4a0,&local_88);
    }
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
    if (cVar5 != '\0') {
      return true;
    }
    return false;
  case 1:
  case 3:
  case 0x2b:
    if (param_3 == 0) {
      return true;
    }
  case 0xf:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 7) {
      return false;
    }
    if ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0) {
      return false;
    }
    return true;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x42:
  case 0x49:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x5a:
    goto LAB_140456929;
  case 4:
  case 0x4b:
    if (param_3 != 0) {
      return false;
    }
    return true;
  case 10:
    goto LAB_14045781b;
  case 0xb:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x298) < 2)) goto LAB_140456929;
    bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2;
    goto joined_r0x000140457889;
  case 0xd:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (6 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 1) != 0)) {
      return false;
    }
    if (param_2 < 0) {
      return false;
    }
    if ((ulonglong)(DAT_141d6e0a8 - DAT_141d6e0a0 >> 3) <= (ulonglong)(longlong)param_2) {
      return false;
    }
    lVar7 = *(longlong *)(DAT_141d6e0a0 + (longlong)param_2 * 8);
    if (*(longlong *)(lVar7 + 200) - *(longlong *)(lVar7 + 0xc0) >> 3 == 0) {
      if (0 < *(int *)(lVar7 + 0xa8)) {
        if ((((**(byte **)(lVar7 + 0xa0) & 4) != 0) &&
            (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
           ((5 < *(int *)(lVar8 + 0x298) &&
            ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 5) & 0x80) != 0)))) {
          return true;
        }
        if (0 < *(int *)(lVar7 + 0xa8)) {
          if ((((**(byte **)(lVar7 + 0xa0) & 8) != 0) &&
              (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
             ((7 < *(int *)(lVar8 + 0x298) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x10) != 0)))) {
            return true;
          }
          if (0 < *(int *)(lVar7 + 0xa8)) {
            if (((((**(byte **)(lVar7 + 0xa0) & 0x10) != 0) &&
                 (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                (2 < *(int *)(lVar8 + 0x298))) &&
               ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 2) & 0x80) != 0)) {
              return true;
            }
            if (0 < *(int *)(lVar7 + 0xa8)) {
              if ((((**(byte **)(lVar7 + 0xa0) & 0x20) != 0) &&
                  (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                 ((6 < *(int *)(lVar8 + 0x298) &&
                  ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) != 0)))) {
                return true;
              }
              if (((0 < *(int *)(lVar7 + 0xa8)) && ((**(byte **)(lVar7 + 0xa0) & 0x80) != 0)) &&
                 ((lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0 &&
                  ((3 < *(int *)(lVar8 + 0x298) &&
                   ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x10) != 0)))))) {
                return true;
              }
            }
          }
        }
      }
      if ((((1 < *(int *)(lVar7 + 0xa8)) && ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 1) != 0))
          && (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
         ((0 < *(int *)(lVar8 + 0x298) && ((**(byte **)(lVar8 + 0x290) & 1) != 0)))) {
        return true;
      }
      if (*(int *)(lVar7 + 0xa8) < 1) {
        return false;
      }
      if ((**(byte **)(lVar7 + 0xa0) & 0x40) == 0) {
        return false;
      }
      lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (lVar7 == 0) {
        return false;
      }
      if (*(int *)(lVar7 + 0x298) < 10) {
        return false;
      }
      bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 9) & 4) == 0;
    }
    else {
      plVar9 = *(longlong **)(lVar7 + 0xc0);
      plVar2 = *(longlong **)(lVar7 + 200);
      while( true ) {
        if (plVar2 <= plVar9) {
          return false;
        }
        iVar6 = FUN_140071310(*plVar9,lVar7 + 0xd8);
        if (iVar6 == 0) break;
        plVar9 = plVar9 + 1;
      }
      iVar6 = *(int *)(*plVar9 + 0x40);
      if (iVar6 < 0) {
        return false;
      }
      if ((ulonglong)(DAT_141d6de20 - DAT_141d6de18 >> 3) <= (ulonglong)(longlong)iVar6) {
        return false;
      }
      lVar7 = *(longlong *)(DAT_141d6de18 + (longlong)iVar6 * 8);
      if ((2 < *(int *)(lVar7 + 0xa8)) && ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 2) & 8) != 0)) {
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = 0;
        FUN_14000c780(&local_a8,"PAPER_SLURRY",0xc);
        bVar3 = false;
        bVar11 = false;
        local_b8 = 1;
        lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
        if ((lVar8 == 0) || (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_a8), cVar5 == '\0')) {
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14000c780(&local_88,"PAPER_PLANT",0xb);
          bVar3 = true;
          bVar11 = false;
          local_b8 = 3;
          lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
          if ((lVar8 != 0) && (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_88), cVar5 != '\0'))
          goto LAB_140456b94;
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          FUN_14000c780(&local_68,"PARCHMENT",9);
          bVar3 = true;
          bVar11 = true;
          lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
          if ((lVar8 != 0) && (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_68), cVar5 != '\0'))
          goto LAB_140456b94;
          bVar4 = false;
        }
        else {
LAB_140456b94:
          bVar4 = true;
        }
        if (bVar11) {
          if (0xf < local_50) {
            FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
          }
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
        }
        if (bVar3) {
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
        }
        if (0xf < local_90) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
        }
        if (bVar4) {
          return true;
        }
      }
      if (0 < *(int *)(lVar7 + 0xa8)) {
        if (((((**(byte **)(lVar7 + 0xa0) & 0x20) != 0) &&
             (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
            (1 < *(int *)(lVar8 + 0x298))) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 1) & 4) != 0)) {
          return true;
        }
        if (0 < *(int *)(lVar7 + 0xa8)) {
          if ((((**(byte **)(lVar7 + 0xa0) & 8) != 0) &&
              (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
             ((6 < *(int *)(lVar8 + 0x298) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 8) != 0)))) {
            return true;
          }
          if (0 < *(int *)(lVar7 + 0xa8)) {
            if ((((**(byte **)(lVar7 + 0xa0) & 2) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((0 < *(int *)(lVar8 + 0x298) && ((**(byte **)(lVar8 + 0x290) & 0x40) != 0)))) {
              return true;
            }
            if (0 < *(int *)(lVar7 + 0xa8)) {
              if (((((**(byte **)(lVar7 + 0xa0) & 1) != 0) &&
                   (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                  (1 < *(int *)(lVar8 + 0x298))) &&
                 ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 1) & 8) != 0)) {
                return true;
              }
              if (((0 < *(int *)(lVar7 + 0xa8)) && ((**(byte **)(lVar7 + 0xa0) & 0x40) != 0)) &&
                 ((lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0 &&
                  ((2 < *(int *)(lVar8 + 0x298) &&
                   ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 2) & 0x80) != 0)))))) {
                return true;
              }
            }
          }
        }
      }
      if (1 < *(int *)(lVar7 + 0xa8)) {
        if (((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 2) != 0) &&
             (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
            (3 < *(int *)(lVar8 + 0x298))) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x20) != 0)) {
          return true;
        }
        if (1 < *(int *)(lVar7 + 0xa8)) {
          if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 4) != 0) &&
              (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
             ((3 < *(int *)(lVar8 + 0x298) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) != 0)))) {
            return true;
          }
          if (1 < *(int *)(lVar7 + 0xa8)) {
            if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 8) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((3 < *(int *)(lVar8 + 0x298) &&
                ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 1) != 0)))) {
              return true;
            }
            if (1 < *(int *)(lVar7 + 0xa8)) {
              if (((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x10) != 0) &&
                   (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                  (6 < *(int *)(lVar8 + 0x298))) &&
                 ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) != 0)) {
                return true;
              }
              if (1 < *(int *)(lVar7 + 0xa8)) {
                if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x20) != 0) &&
                    (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                   ((9 < *(int *)(lVar8 + 0x298) &&
                    ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 9) & 4) != 0)))) {
                  return true;
                }
                if (1 < *(int *)(lVar7 + 0xa8)) {
                  if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x40) != 0) &&
                      (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                     ((7 < *(int *)(lVar8 + 0x298) &&
                      ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x10) != 0)))) {
                    return true;
                  }
                  if ((((1 < *(int *)(lVar7 + 0xa8)) &&
                       ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x80) != 0)) &&
                      (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                     (3 < *(int *)(lVar8 + 0x298))) {
                    bVar1 = *(byte *)(*(longlong *)(lVar8 + 0x290) + 3);
                    goto joined_r0x00014045778c;
                  }
                }
              }
            }
          }
        }
      }
LAB_140457792:
      if (*(int *)(lVar7 + 0xa8) < 3) {
        return false;
      }
      if ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 2) & 1) == 0) {
        return false;
      }
      lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (lVar7 == 0) {
        return false;
      }
      if (*(int *)(lVar7 + 0x298) < 1) {
        return false;
      }
      bVar11 = (**(byte **)(lVar7 + 0x290) & 1) == 0;
    }
    break;
  case 0xe:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (6 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 1) != 0)) {
      return false;
    }
    goto LAB_140456929;
  default:
    goto switchD_14045680d_caseD_17;
  case 0x18:
    if ((param_2 < 0) ||
       (uVar10 = (ulonglong)param_2, (ulonglong)(DAT_141d6ddd8 - DAT_141d6ddd0 >> 3) <= uVar10)) {
      lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (((lVar7 == 0) ||
          ((*(int *)(lVar7 + 0x298) < 7 || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 8) == 0))
          )) && ((lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar7 == 0 ||
                 ((*(int *)(lVar7 + 0x298) < 7 ||
                  ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 0x10) == 0)))))) {
        lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
        if (lVar7 == 0) {
          return false;
        }
        if (*(int *)(lVar7 + 0x298) < 7) {
          return false;
        }
        if ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 0x80) == 0) {
          return false;
        }
      }
      return true;
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 7)) ||
        ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 0x80) == 0)) &&
       (*(short *)(*(longlong *)(lVar7 + uVar10 * 8) + 200) == 0)) {
      return false;
    }
    if (*(longlong *)(*(longlong *)(lVar7 + uVar10 * 8) + 0xe0) == 0) goto LAB_140457a29;
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 7) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 0x10) == 0;
    break;
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x3b:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 4;
joined_r0x0001404578c4:
      if (bVar1 != 0) {
        return true;
      }
    }
    goto LAB_1404578ca;
  case 0x1b:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2;
      goto joined_r0x0001404578c4;
    }
LAB_1404578ca:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 8) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 1) == 0;
    break;
  case 0x1e:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) != 0)) {
      return true;
    }
LAB_14045781b:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 4;
joined_r0x000140457889:
      if (bVar1 != 0) {
        return true;
      }
    }
    goto LAB_140456929;
  case 0x23:
  case 0x27:
  case 0x28:
    goto LAB_140457f0a;
  case 0x24:
  case 0x2a:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 4) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 8) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x298))) &&
       ((**(byte **)(lVar7 + 0x290) & 0x80) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x298) < 2)) goto LAB_140457e65;
    bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 1;
    goto joined_r0x000140457e5f;
  case 0x25:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 8) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x298))) {
      bVar1 = **(byte **)(lVar7 + 0x290) & 0x80;
      goto joined_r0x000140457e5f;
    }
    goto LAB_140457e65;
  case 0x26:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 7) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 0x40) == 0;
    break;
  case 0x29:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1);
joined_r0x000140458066:
      if ((bVar1 & 4) != 0) {
        return true;
      }
    }
    goto LAB_140457f0a;
  case 0x2c:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 7) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 0x20) == 0;
    break;
  case 0x38:
  case 0x39:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 2) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 4) == 0;
    break;
  case 0x3c:
  case 0x3d:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 2) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) == 0;
    break;
  case 0x3e:
  case 0x3f:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 8) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 4) == 0;
    break;
  case 0x40:
  case 0x41:
  case 0x43:
LAB_140457a29:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 7) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 8) == 0;
    break;
  case 0x4f:
  case 0x50:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 8) {
      return false;
    }
    if ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 8) == 0) {
      return false;
    }
    return true;
  case 0x55:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (6 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 1) != 0)) {
      return false;
    }
    if ((-1 < param_2) &&
       ((ulonglong)(longlong)param_2 < (ulonglong)(DAT_141d6de20 - DAT_141d6de18 >> 3))) {
      lVar7 = *(longlong *)(DAT_141d6de18 + (longlong)param_2 * 8);
      if ((2 < *(int *)(lVar7 + 0xa8)) && ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 2) & 8) != 0)) {
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = 0;
        FUN_14000c780(&local_a8,"PAPER_SLURRY",0xc);
        bVar3 = false;
        bVar11 = false;
        local_b8 = 8;
        lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
        if ((lVar8 == 0) || (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_a8), cVar5 == '\0')) {
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
          FUN_14000c780(&local_68,"PAPER_PLANT",0xb);
          bVar3 = true;
          bVar11 = false;
          local_b8 = 0x18;
          lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
          if ((lVar8 != 0) && (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_68), cVar5 != '\0'))
          goto LAB_140457381;
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
          FUN_14000c780(&local_88,"PARCHMENT",9);
          bVar3 = true;
          bVar11 = true;
          lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
          if ((lVar8 != 0) && (cVar5 = FUN_140280490(lVar8 + 0x4a0,&local_88), cVar5 != '\0'))
          goto LAB_140457381;
          bVar4 = false;
        }
        else {
LAB_140457381:
          bVar4 = true;
        }
        if (bVar11) {
          if (0xf < local_70) {
            FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
          }
          local_70 = 0xf;
          local_78 = 0;
          local_88 = 0;
        }
        if (bVar3) {
          if (0xf < local_50) {
            FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
          }
          local_50 = 0xf;
          local_58 = 0;
          local_68 = 0;
        }
        if (0xf < local_90) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
        }
        if (bVar4) {
          return true;
        }
      }
      if (0 < *(int *)(lVar7 + 0xa8)) {
        if (((((**(byte **)(lVar7 + 0xa0) & 0x20) != 0) &&
             (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
            (1 < *(int *)(lVar8 + 0x298))) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 1) & 4) != 0)) {
          return true;
        }
        if (0 < *(int *)(lVar7 + 0xa8)) {
          if ((((**(byte **)(lVar7 + 0xa0) & 8) != 0) &&
              (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
             ((6 < *(int *)(lVar8 + 0x298) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 8) != 0)))) {
            return true;
          }
          if (0 < *(int *)(lVar7 + 0xa8)) {
            if ((((**(byte **)(lVar7 + 0xa0) & 2) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((0 < *(int *)(lVar8 + 0x298) && ((**(byte **)(lVar8 + 0x290) & 0x40) != 0)))) {
              return true;
            }
            if (0 < *(int *)(lVar7 + 0xa8)) {
              if (((((**(byte **)(lVar7 + 0xa0) & 1) != 0) &&
                   (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                  (1 < *(int *)(lVar8 + 0x298))) &&
                 ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 1) & 8) != 0)) {
                return true;
              }
              if (((0 < *(int *)(lVar7 + 0xa8)) && ((**(byte **)(lVar7 + 0xa0) & 0x40) != 0)) &&
                 ((lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0 &&
                  ((2 < *(int *)(lVar8 + 0x298) &&
                   ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 2) & 0x80) != 0)))))) {
                return true;
              }
            }
          }
        }
      }
      if (1 < *(int *)(lVar7 + 0xa8)) {
        if (((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 2) != 0) &&
             (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
            (3 < *(int *)(lVar8 + 0x298))) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x20) != 0)) {
          return true;
        }
        if (1 < *(int *)(lVar7 + 0xa8)) {
          if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 4) != 0) &&
              (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
             ((3 < *(int *)(lVar8 + 0x298) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) != 0)))) {
            return true;
          }
          if (1 < *(int *)(lVar7 + 0xa8)) {
            if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 8) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((3 < *(int *)(lVar8 + 0x298) &&
                ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 1) != 0)))) {
              return true;
            }
            if (*(int *)(lVar7 + 0xa8) < 2) goto LAB_140457792;
            if (((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x10) != 0) &&
                 (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
                (6 < *(int *)(lVar8 + 0x298))) &&
               ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) != 0)) {
              return true;
            }
            if (*(int *)(lVar7 + 0xa8) < 2) goto LAB_140457792;
            if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x20) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((9 < *(int *)(lVar8 + 0x298) &&
                ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 9) & 4) != 0)))) {
              return true;
            }
            if (*(int *)(lVar7 + 0xa8) < 2) goto LAB_140457792;
            if ((((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x40) != 0) &&
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 != 0)) &&
               ((7 < *(int *)(lVar8 + 0x298) &&
                ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x10) != 0)))) {
              return true;
            }
            if ((((*(int *)(lVar7 + 0xa8) < 2) ||
                 ((*(byte *)(*(longlong *)(lVar7 + 0xa0) + 1) & 0x80) == 0)) ||
                (lVar8 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar8 == 0)) ||
               (*(int *)(lVar8 + 0x298) < 4)) goto LAB_140457792;
            bVar1 = *(byte *)(*(longlong *)(lVar8 + 0x290) + 3);
joined_r0x00014045778c:
            if ((bVar1 & 0x10) != 0) {
              return true;
            }
          }
        }
      }
      goto LAB_140457792;
    }
LAB_140456929:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 2) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 8) == 0;
    break;
  case 0x58:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 2) != 0)) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1);
      goto joined_r0x000140458066;
    }
LAB_140457f0a:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) &&
        ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 8) != 0)) ||
       (((lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4), lVar7 != 0 &&
         (0 < *(int *)(lVar7 + 0x298))) && ((**(byte **)(lVar7 + 0x290) & 0x80) != 0)))) {
      return true;
    }
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar7 != 0) && (1 < *(int *)(lVar7 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x290) + 1) & 1;
joined_r0x000140457e5f:
      if (bVar1 != 0) {
        return true;
      }
    }
LAB_140457e65:
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar7 + 0x298) < 8) {
      return false;
    }
    bVar11 = (*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 2) == 0;
    break;
  case 0x59:
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_14000c780(&local_a8,"SHEET_PLANT",0xb);
    lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (lVar7 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = FUN_140280490(lVar7 + 0x4a0,&local_a8);
    }
    if (0xf < local_90) {
      FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
    }
    if (cVar5 == '\0') {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      FUN_14000c780(&local_a8,"PAPER_SLURRY",0xc);
      lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (lVar7 == 0) {
        cVar5 = '\0';
      }
      else {
        cVar5 = FUN_140280490(lVar7 + 0x4a0,&local_a8);
      }
      if (0xf < local_90) {
        FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
      }
      if (cVar5 == '\0') {
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = 0;
        FUN_14000c780(&local_a8,"PARCHMENT",9);
        lVar7 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
        if (lVar7 == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = FUN_140280490(lVar7 + 0x4a0,&local_a8);
        }
        if (0xf < local_90) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
        }
        return cVar5 != '\0';
      }
      return true;
    }
    return true;
  }
  if (!bVar11) {
    return true;
  }
switchD_14045680d_caseD_17:
  return false;
}

