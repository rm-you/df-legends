// FUN_140758fa0 @ 140758fa0
// callees:
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_140758fa0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  int aiStack_58 [4];
  int aiStack_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0xe0) != param_2) {
    iVar18 = 0;
    plVar11 = *(longlong **)(param_1 + 0x118);
    iVar8 = -1;
    plVar1 = *(longlong **)(param_1 + 0x120);
    iVar16 = -1;
    local_70 = -1;
    local_6c = -1;
    local_68 = param_1;
    for (; plVar11 < plVar1; plVar11 = plVar11 + 1) {
      sVar3 = (*(code *)**(undefined8 **)*plVar11)();
      if (sVar3 == 0) {
        iVar8 = *(int *)(*plVar11 + 8);
        local_70 = iVar8;
        if (iVar8 == param_2) {
          return 0;
        }
      }
      else if (sVar3 == 1) {
        iVar16 = *(int *)(*plVar11 + 8);
        local_6c = iVar16;
        if (iVar16 == param_2) {
          return 1;
        }
      }
      else if (sVar3 == 2) {
        if (*(int *)(*plVar11 + 8) == param_2) {
          return 5;
        }
      }
      else if ((sVar3 == 3) && (*(int *)(*plVar11 + 8) == param_2)) {
        return 0x2a;
      }
    }
    lVar12 = 0;
    lVar15 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    iVar17 = 0;
    lVar13 = lVar12;
    if (((lVar15 != 0) && (iVar8 != -1)) && (iVar7 = (int)lVar15 + -1, iVar5 = iVar17, -1 < iVar7))
    {
      do {
        iVar4 = iVar7 + iVar5 >> 1;
        lVar13 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar4 * 8);
        iVar9 = *(int *)(lVar13 + 0xe0);
        if (iVar9 == iVar8) break;
        if (iVar8 < iVar9) {
          iVar7 = iVar4 + -1;
        }
        else {
          iVar5 = iVar4 + 1;
        }
        lVar13 = lVar12;
      } while (iVar5 <= iVar7);
    }
    lVar14 = lVar12;
    if (((lVar15 != 0) && (iVar16 != -1)) && (iVar8 = (int)lVar15 + -1, -1 < iVar8)) {
      do {
        iVar5 = iVar8 + iVar17 >> 1;
        lVar14 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar5 * 8);
        iVar7 = *(int *)(lVar14 + 0xe0);
        if (iVar7 == iVar16) break;
        if (iVar16 < iVar7) {
          iVar8 = iVar5 + -1;
        }
        else {
          iVar17 = iVar5 + 1;
        }
        lVar14 = lVar12;
      } while (iVar17 <= iVar8);
    }
    if (lVar13 != 0) {
      plVar1 = *(longlong **)(lVar13 + 0x120);
      iVar18 = 0;
      for (plVar11 = *(longlong **)(lVar13 + 0x118); plVar11 < plVar1; plVar11 = plVar11 + 1) {
        sVar3 = (*(code *)**(undefined8 **)*plVar11)();
        if (sVar3 == 0) {
          iVar16 = *(int *)(*plVar11 + 8);
          if (iVar16 == param_2) {
            return 0x2f;
          }
LAB_1407591eb:
          if (lVar12 < 4) {
            iVar18 = iVar18 + 1;
            aiStack_58[lVar12] = iVar16;
            lVar12 = lVar12 + 1;
          }
        }
        else {
          if (sVar3 == 1) {
            iVar16 = *(int *)(*plVar11 + 8);
            if (iVar16 == param_2) {
              return 0x30;
            }
            goto LAB_1407591eb;
          }
          if ((sVar3 == 3) && (*(int *)(*plVar11 + 8) == param_2)) {
            if (lVar14 == 0) {
              return 0x47;
            }
            plVar11 = *(longlong **)(lVar14 + 0x118);
            plVar1 = *(longlong **)(lVar14 + 0x120);
            while( true ) {
              if (plVar1 <= plVar11) {
                return 0x47;
              }
              sVar3 = (*(code *)**(undefined8 **)*plVar11)();
              if ((sVar3 == 3) && (*(int *)(*plVar11 + 8) == param_2)) break;
              plVar11 = plVar11 + 1;
            }
            return 0x3f;
          }
        }
      }
    }
    if (lVar14 != 0) {
      plVar11 = *(longlong **)(lVar14 + 0x118);
      plVar1 = *(longlong **)(lVar14 + 0x120);
      if (plVar11 < plVar1) {
        lVar13 = (longlong)iVar18;
        do {
          sVar3 = (*(code *)**(undefined8 **)*plVar11)();
          if (sVar3 == 0) {
            iVar16 = *(int *)(*plVar11 + 8);
            if (iVar16 == param_2) {
              return 0x2d;
            }
LAB_140759280:
            if (lVar13 < 4) {
              iVar18 = iVar18 + 1;
              aiStack_58[lVar13] = iVar16;
              lVar13 = lVar13 + 1;
            }
          }
          else {
            if (sVar3 == 1) {
              iVar16 = *(int *)(*plVar11 + 8);
              if (iVar16 == param_2) {
                return 0x2e;
              }
              goto LAB_140759280;
            }
            if ((sVar3 == 3) && (*(int *)(*plVar11 + 8) == param_2)) {
              return 0x47;
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 < plVar1);
      }
    }
    lVar13 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar13 != 0) && (param_2 != -1)) {
      iVar17 = 0;
      iVar16 = (int)lVar13 + -1;
      iVar8 = 0;
      if (-1 < iVar16) {
        while( true ) {
          iVar7 = iVar16 + iVar8 >> 1;
          local_60 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar7 * 8);
          if (*(int *)(local_60 + 0xe0) == param_2) break;
          if (param_2 < *(int *)(local_60 + 0xe0)) {
            iVar16 = iVar7 + -1;
          }
          else {
            iVar8 = iVar7 + 1;
          }
          if (iVar16 < iVar8) {
            return -1;
          }
        }
        if (local_60 == 0) {
          return -1;
        }
        plVar11 = *(longlong **)(local_60 + 0x118);
        plVar1 = *(longlong **)(local_60 + 0x120);
        iVar8 = -1;
        iVar16 = -1;
        local_78 = -1;
        local_74 = -1;
        for (; plVar11 < plVar1; plVar11 = plVar11 + 1) {
          sVar3 = (*(code *)**(undefined8 **)*plVar11)();
          if (sVar3 == 0) {
            local_78 = *(int *)(*plVar11 + 8);
          }
          else if (sVar3 == 1) {
            local_74 = *(int *)(*plVar11 + 8);
          }
          else if (sVar3 == 2) {
            iVar7 = *(int *)(*plVar11 + 8);
            lVar13 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
            if ((lVar13 != 0) && (iVar7 != -1)) {
              iVar5 = (int)lVar13 + -1;
              iVar9 = 0;
              if (-1 < iVar5) {
                do {
                  iVar4 = iVar5 + iVar9 >> 1;
                  lVar13 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar4 * 8);
                  if (*(int *)(lVar13 + 0xe0) == iVar7) {
                    if (lVar13 != 0) {
                      plVar2 = *(longlong **)(lVar13 + 0x120);
                      for (plVar10 = *(longlong **)(lVar13 + 0x118); plVar10 < plVar2;
                          plVar10 = plVar10 + 1) {
                        sVar3 = (*(code *)**(undefined8 **)*plVar10)();
                        if (sVar3 == 0) {
                          iVar8 = *(int *)(*plVar10 + 8);
                        }
                        else if (sVar3 == 1) {
                          iVar16 = *(int *)(*plVar10 + 8);
                        }
                      }
                    }
                    break;
                  }
                  if (iVar7 < *(int *)(lVar13 + 0xe0)) {
                    iVar5 = iVar4 + -1;
                  }
                  else {
                    iVar9 = iVar4 + 1;
                  }
                } while (iVar9 <= iVar5);
              }
            }
          }
        }
        lVar12 = 0;
        lVar15 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
        iVar7 = 0;
        lVar13 = lVar12;
        if (((lVar15 != 0) && (local_78 != -1)) &&
           (iVar5 = (int)lVar15 + -1, iVar9 = iVar7, -1 < iVar5)) {
          do {
            iVar6 = iVar5 + iVar9 >> 1;
            lVar13 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar6 * 8);
            iVar4 = *(int *)(lVar13 + 0xe0);
            if (iVar4 == local_78) break;
            if (local_78 < iVar4) {
              iVar5 = iVar6 + -1;
            }
            else {
              iVar9 = iVar6 + 1;
            }
            lVar13 = lVar12;
          } while (iVar9 <= iVar5);
        }
        lVar14 = lVar12;
        if (((lVar15 != 0) && (local_74 != -1)) && (iVar5 = (int)lVar15 + -1, -1 < iVar5)) {
          do {
            iVar4 = iVar5 + iVar7 >> 1;
            lVar14 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar4 * 8);
            iVar9 = *(int *)(lVar14 + 0xe0);
            if (iVar9 == local_74) break;
            if (local_74 < iVar9) {
              iVar5 = iVar4 + -1;
            }
            else {
              iVar7 = iVar4 + 1;
            }
            lVar14 = lVar12;
          } while (iVar7 <= iVar5);
        }
        iVar7 = iVar17;
        if (lVar13 != 0) {
          plVar11 = *(longlong **)(lVar13 + 0x118);
          plVar1 = *(longlong **)(lVar13 + 0x120);
          iVar7 = 0;
          if (plVar11 < plVar1) {
            lVar13 = 0;
            do {
              sVar3 = (*(code *)**(undefined8 **)*plVar11)();
              if ((sVar3 == 0) || (sVar3 == 1)) {
                if (*(int *)(*plVar11 + 8) == *(int *)(local_68 + 0xe0)) {
                  return 0x40;
                }
                if (lVar13 < 4) {
                  iVar17 = iVar17 + 1;
                  aiStack_48[lVar13] = *(int *)(*plVar11 + 8);
                  lVar13 = lVar13 + 1;
                }
              }
              plVar11 = plVar11 + 1;
              iVar7 = iVar17;
            } while (plVar11 < plVar1);
          }
        }
        if (lVar14 != 0) {
          plVar11 = *(longlong **)(lVar14 + 0x118);
          plVar1 = *(longlong **)(lVar14 + 0x120);
          if (plVar11 < plVar1) {
            lVar13 = (longlong)iVar7;
            do {
              sVar3 = (*(code *)**(undefined8 **)*plVar11)();
              if ((sVar3 == 0) || (sVar3 == 1)) {
                if (*(int *)(*plVar11 + 8) == *(int *)(local_68 + 0xe0)) {
                  return 0x40;
                }
                if (lVar13 < 4) {
                  iVar7 = iVar7 + 1;
                  aiStack_48[lVar13] = *(int *)(*plVar11 + 8);
                  lVar13 = lVar13 + 1;
                }
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 < plVar1);
          }
        }
        lVar12 = 0;
        lVar13 = lVar12;
        if (0 < iVar18) {
          do {
            if (((((local_78 != -1) && (aiStack_58[lVar13] == local_78)) ||
                 ((local_74 != -1 && (aiStack_58[lVar13] == local_74)))) ||
                ((iVar8 != -1 && (aiStack_58[lVar13] == iVar8)))) ||
               ((iVar16 != -1 && (aiStack_58[lVar13] == iVar16)))) {
              return (*(char *)(local_60 + 6) != '\0') + 0x3b;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar18);
        }
        lVar13 = lVar12;
        if (0 < iVar7) {
          do {
            if ((aiStack_48[lVar13] == local_70) || (aiStack_48[lVar13] == local_6c)) {
              return (*(char *)(local_60 + 6) != '\0') + 0x3d;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar7);
        }
        lVar13 = lVar12;
        if (0 < iVar18) {
          do {
            if (0 < iVar7) {
              lVar15 = lVar12;
              do {
                if (aiStack_58[lVar13] == aiStack_48[lVar15]) {
                  return 0x3a;
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar7);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar18);
        }
        return -1;
      }
    }
  }
  return -1;
}

