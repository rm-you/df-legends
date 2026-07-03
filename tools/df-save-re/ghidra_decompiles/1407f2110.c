// FUN_1407f2110 @ 1407f2110
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14061fbe0 FUN_14061fbe0
//   -> 140824380 FUN_140824380
//   -> 140050540 FUN_140050540


void FUN_1407f2110(longlong *param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int *piVar15;
  char local_res10 [8];
  
  param_2[2] = 0;
  plVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar9 = (longlong *)*param_2;
  }
  *(undefined1 *)plVar9 = 0;
  puVar1 = (undefined8 *)param_1[8];
  for (puVar13 = (undefined8 *)param_1[7]; puVar13 < puVar1; puVar13 = puVar13 + 1) {
    iVar8 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
    if (iVar8 == 1) {
      lVar10 = (**(code **)(*(longlong *)*puVar13 + 0x40))();
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0x7a) != '\0') && (param_3 == '\0')) {
          FUN_14061fbe0(lVar10 + 8,param_2);
          return;
        }
        goto LAB_1407f2343;
      }
      break;
    }
  }
  if (param_3 == '\0') {
    sVar5 = (**(code **)*param_1)(param_1);
    if ((sVar5 == 0x58) && (param_1[0x1e] != 0)) {
      param_1 = param_1 + 0x1c;
      goto LAB_1407f21a3;
    }
    sVar5 = (**(code **)*param_1)(param_1);
    if (sVar5 == 0x55) {
      plVar2 = (longlong *)param_1[0x1a];
      for (plVar9 = (longlong *)param_1[0x19]; plVar9 < plVar2; plVar9 = plVar9 + 1) {
        iVar8 = (**(code **)(*(longlong *)*plVar9 + 0x28))();
        if ((iVar8 == 0xc) &&
           (lVar10 = *plVar9, *(longlong *)(lVar10 + 0x30) - *(longlong *)(lVar10 + 0x28) >> 2 != 0)
           ) {
          iVar8 = (int)(DAT_141d69150 - DAT_141d69148 >> 3) + -1;
          iVar14 = 0;
          if (-1 < iVar8) {
            do {
              iVar12 = iVar8 + iVar14 >> 1;
              piVar15 = *(int **)(DAT_141d69148 + (longlong)iVar12 * 8);
              if (*piVar15 == **(int **)(lVar10 + 0x28)) {
                if ((piVar15 != (int *)0x0) && (*(longlong *)(piVar15 + 6) != 0))
                goto LAB_1407f2422;
                break;
              }
              if (**(int **)(lVar10 + 0x28) < *piVar15) {
                iVar8 = iVar12 + -1;
              }
              else {
                iVar14 = iVar12 + 1;
              }
            } while (iVar14 <= iVar8);
          }
        }
        iVar8 = (**(code **)(*(longlong *)*plVar9 + 0x28))();
        if ((iVar8 == 9) &&
           (lVar10 = *plVar9, *(longlong *)(lVar10 + 0x38) - *(longlong *)(lVar10 + 0x30) >> 2 != 0)
           ) {
          iVar8 = (int)(DAT_141d69150 - DAT_141d69148 >> 3) + -1;
          iVar14 = 0;
          if (-1 < iVar8) {
            do {
              iVar12 = iVar8 + iVar14 >> 1;
              piVar15 = *(int **)(DAT_141d69148 + (longlong)iVar12 * 8);
              if (*piVar15 == **(int **)(lVar10 + 0x30)) {
                if ((piVar15 != (int *)0x0) && (*(longlong *)(piVar15 + 6) != 0))
                goto LAB_1407f2422;
                break;
              }
              if (**(int **)(lVar10 + 0x30) < *piVar15) {
                iVar8 = iVar12 + -1;
              }
              else {
                iVar14 = iVar12 + 1;
              }
            } while (iVar14 <= iVar8);
          }
        }
      }
    }
  }
LAB_1407f2343:
  sVar5 = (**(code **)(*param_1 + 0x518))(param_1);
  sVar6 = (**(code **)(*param_1 + 0x528))(param_1);
  cVar4 = (**(code **)(*param_1 + 0x5e8))(param_1);
  if ((cVar4 == '\0') && (sVar5 < sVar6)) {
    sVar5 = sVar6;
  }
  (**(code **)(*param_1 + 0x600))(param_1,param_2,param_4);
  if (param_3 == '\0') {
    if ((DAT_1410b67dc == 1) && (cVar4 = FUN_140824380(param_1,0x1f), cVar4 != '\0')) {
      FUN_140050540(param_2,1,0x24);
    }
    if ((*(uint *)(param_1 + 2) & 0x400000) != 0) {
      FUN_140050540(param_2,1,0x13);
    }
    sVar7 = (**(code **)(*param_1 + 0x1d8))(param_1);
    local_res10[1] = 0;
    if (sVar7 < 3) {
      if (sVar7 == 2) {
        local_res10[0] = 'X';
        lVar10 = -1;
        do {
          lVar11 = lVar10 + 1;
          lVar3 = lVar10 + 1;
          lVar10 = lVar11;
        } while (local_res10[lVar3] != '\0');
        goto LAB_1407f247a;
      }
      if (sVar7 == 1) {
        local_res10[0] = 'x';
        lVar10 = -1;
        do {
          lVar11 = lVar10 + 1;
          lVar3 = lVar10 + 1;
          lVar10 = lVar11;
        } while (local_res10[lVar3] != '\0');
        goto LAB_1407f247a;
      }
    }
    else {
      local_res10[0] = 'X';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      FUN_14000c9f0(param_2,local_res10);
      if (local_res10[0] == '\0') {
        lVar11 = 0;
      }
      else {
        lVar10 = -1;
        do {
          lVar11 = lVar10 + 1;
          lVar3 = lVar10 + 1;
          lVar10 = lVar11;
        } while (local_res10[lVar3] != '\0');
      }
LAB_1407f247a:
      FUN_14000c9f0(param_2,local_res10,lVar11);
    }
    if (DAT_1410b67dc == 0) {
      if ((*(uint *)(param_1 + 2) & 0x4000) != 0) {
        local_res10[0] = '(';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
        FUN_14000c9f0(param_2,local_res10);
      }
      if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
        local_res10[0] = '{';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
        FUN_14000c9f0(param_2,local_res10);
      }
    }
    cVar4 = (**(code **)(*param_1 + 0x5e8))(param_1);
    if (cVar4 != '\0') {
      if ((0 < DAT_141c33fa8) && ((*DAT_141c33fa0 & 4) != 0)) {
        if (sVar6 == 5) {
          local_res10[0] = '\x0f';
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (local_res10[lVar3] != '\0');
        }
        else if (sVar6 == 4) {
          local_res10[0] = -0x10;
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (local_res10[lVar3] != '\0');
        }
        else if (sVar6 == 3) {
          local_res10[0] = '*';
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (local_res10[lVar3] != '\0');
        }
        else if (sVar6 == 2) {
          local_res10[0] = '+';
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (local_res10[lVar3] != '\0');
        }
        else {
          if (sVar6 != 1) goto LAB_1407f25c6;
          local_res10[0] = '-';
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (local_res10[lVar3] != '\0');
        }
        FUN_14000c9f0(param_2,local_res10);
      }
LAB_1407f25c6:
      local_res10[0] = -0x52;
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      FUN_14000c9f0(param_2,local_res10);
    }
    lVar10 = (**(code **)(*param_1 + 0x5f0))(param_1);
    if (lVar10 != 0) {
      local_res10[0] = '\x11';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      FUN_14000c9f0(param_2,local_res10);
    }
    if (sVar5 == 5) {
      local_res10[0] = '\x0f';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
    }
    else if (sVar5 == 4) {
      local_res10[0] = -0x10;
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
    }
    else if (sVar5 == 3) {
      local_res10[0] = '*';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
    }
    else if (sVar5 == 2) {
      local_res10[0] = '+';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
    }
    else {
      if (sVar5 != 1) goto LAB_1407f26c6;
      local_res10[0] = '-';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
    }
    FUN_14000c9f0(param_2,local_res10);
  }
LAB_1407f26c6:
  (**(code **)(*param_1 + 0x5f8))(param_1,param_2,param_3);
  if (param_3 != '\0') {
    return;
  }
  sVar7 = (**(code **)(*param_1 + 0x1d8))(param_1);
  local_res10[1] = param_3;
  if (sVar5 == 5) {
    local_res10[0] = '\x0f';
    lVar10 = -1;
    do {
      lVar3 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (local_res10[lVar3] != '\0');
LAB_1407f279a:
    FUN_14000c9f0(param_2,local_res10);
  }
  else {
    if (sVar5 == 4) {
      local_res10[0] = -0x10;
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      goto LAB_1407f279a;
    }
    if (sVar5 == 3) {
      local_res10[0] = '*';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      goto LAB_1407f279a;
    }
    if (sVar5 == 2) {
      local_res10[0] = '+';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      goto LAB_1407f279a;
    }
    if (sVar5 == 1) {
      local_res10[0] = '-';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      goto LAB_1407f279a;
    }
  }
  lVar10 = (**(code **)(*param_1 + 0x5f0))(param_1);
  if (lVar10 != 0) {
    local_res10[0] = '\x10';
    lVar10 = -1;
    do {
      lVar3 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (local_res10[lVar3] != '\0');
    FUN_14000c9f0(param_2,local_res10);
  }
  cVar4 = (**(code **)(*param_1 + 0x5e8))(param_1);
  if (cVar4 != '\0') {
    local_res10[0] = -0x51;
    lVar10 = -1;
    do {
      lVar3 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (local_res10[lVar3] != '\0');
    FUN_14000c9f0(param_2,local_res10);
    if ((0 < DAT_141c33fa8) && ((*DAT_141c33fa0 & 4) != 0)) {
      if (sVar6 == 5) {
        local_res10[0] = '\x0f';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
      }
      else if (sVar6 == 4) {
        local_res10[0] = -0x10;
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
      }
      else if (sVar6 == 3) {
        local_res10[0] = '*';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
      }
      else if (sVar6 == 2) {
        local_res10[0] = '+';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
      }
      else {
        if (sVar6 != 1) goto LAB_1407f28d6;
        local_res10[0] = '-';
        lVar10 = -1;
        do {
          lVar3 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (local_res10[lVar3] != '\0');
      }
      FUN_14000c9f0(param_2,local_res10);
    }
  }
LAB_1407f28d6:
  if (DAT_1410b67dc == 0) {
    if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
      local_res10[0] = '}';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      FUN_14000c9f0(param_2,local_res10);
    }
    if ((*(uint *)(param_1 + 2) & 0x4000) != 0) {
      local_res10[0] = ')';
      lVar10 = -1;
      do {
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_res10[lVar3] != '\0');
      FUN_14000c9f0(param_2,local_res10);
    }
  }
  if (sVar7 < 3) {
    if (sVar7 == 2) {
      local_res10[0] = 'X';
      lVar10 = -1;
      do {
        lVar11 = lVar10 + 1;
        lVar3 = lVar10 + 1;
        lVar10 = lVar11;
      } while (local_res10[lVar3] != '\0');
    }
    else {
      if (sVar7 != 1) goto LAB_1407f29d8;
      local_res10[0] = 'x';
      lVar10 = -1;
      do {
        lVar11 = lVar10 + 1;
        lVar3 = lVar10 + 1;
        lVar10 = lVar11;
      } while (local_res10[lVar3] != '\0');
    }
  }
  else {
    local_res10[0] = 'X';
    lVar10 = -1;
    do {
      lVar3 = lVar10 + 1;
      lVar10 = lVar10 + 1;
    } while (local_res10[lVar3] != '\0');
    FUN_14000c9f0(param_2,local_res10);
    if (local_res10[0] == '\0') {
      lVar11 = 0;
    }
    else {
      lVar10 = -1;
      do {
        lVar11 = lVar10 + 1;
        lVar3 = lVar10 + 1;
        lVar10 = lVar11;
      } while (local_res10[lVar3] != '\0');
    }
  }
  FUN_14000c9f0(param_2,local_res10,lVar11);
LAB_1407f29d8:
  if ((*(uint *)(param_1 + 2) & 0x400000) != 0) {
    FUN_140050540(param_2,1,0x13);
  }
  if ((DAT_1410b67dc == 1) && (cVar4 = FUN_140824380(param_1,0x1f), cVar4 != '\0')) {
    FUN_140050540(param_2,1,0x24);
  }
  return;
LAB_1407f2422:
  param_1 = (longlong *)(piVar15 + 2);
LAB_1407f21a3:
  if (param_2 != param_1) {
    FUN_14000c8b0(param_2,param_1,0,0xffffffffffffffff);
  }
  FUN_14000c9f0(param_2," (copy)",7);
  return;
}

