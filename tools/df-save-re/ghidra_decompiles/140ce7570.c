// FUN_140ce7570 @ 140ce7570
// callees:
//   -> 140273de0 FUN_140273de0
//   -> 140051f80 FUN_140051f80


/* WARNING: Switch with 1 destination removed at 0x000140ce778c : 9 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000140ce77b1 : 9 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000140ce7b03 : 9 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000140ce7b24 : 9 cases all go to same destination
    */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140ce7570(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  iVar4 = param_1[9];
  if (((iVar4 != 2) || (param_2[9] != 2)) &&
     ((param_2[6] < param_1[6] || ((param_2[6] == param_1[6] && (param_2[7] < param_1[7])))))) {
    return 0;
  }
  switch(iVar4) {
  case 0:
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar4 = param_2[9];
    if ((iVar4 != 0) && (iVar4 != 3)) {
      bVar10 = iVar4 - 0xbU < 4;
      bVar9 = iVar4 - 0xbU == 4;
      goto LAB_140ce7642;
    }
    goto LAB_140ce7648;
  case 1:
    if (param_2[9] != 1) {
      return 0;
    }
    bVar10 = *param_1 == *param_2;
    goto LAB_140ce7b2c;
  case 2:
    iVar4 = param_2[9];
    if (iVar4 == 2) {
      iVar5 = 0;
      iVar7 = 0;
      iVar8 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
      iVar4 = iVar8;
      if (-1 < iVar8) {
        while( true ) {
          iVar6 = iVar4 + iVar7 >> 1;
          piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar6 * 8);
          if (*piVar1 == param_1[1]) break;
          if (param_1[1] < *piVar1) {
            iVar4 = iVar6 + -1;
          }
          else {
            iVar7 = iVar6 + 1;
          }
          if (iVar4 < iVar7) {
            return 0;
          }
        }
        if (((piVar1 != (int *)0x0) && (piVar1[1] == 7)) && (-1 < iVar8)) {
          while( true ) {
            iVar4 = iVar8 + iVar5 >> 1;
            piVar2 = *(int **)(DAT_141d691a8 + (longlong)iVar4 * 8);
            if (*piVar2 == param_2[1]) break;
            if (param_2[1] < *piVar2) {
              iVar8 = iVar4 + -1;
            }
            else {
              iVar5 = iVar4 + 1;
            }
            if (iVar8 < iVar5) {
              return 0;
            }
          }
          if (((piVar2 != (int *)0x0) && (piVar2[1] == 7)) &&
             ((*(int *)(*(longlong *)(piVar1 + 0x44) + 4) ==
               *(int *)(*(longlong *)(piVar2 + 0x44) + 4) && (piVar1[8] <= piVar2[8])))) {
            if (piVar2[8] != piVar1[8]) {
              return 1;
            }
            if (piVar1[9] <= piVar2[9]) {
              return 1;
            }
          }
        }
      }
    }
    else if (iVar4 - 0x19U < 9) {
      iVar8 = 0;
      iVar7 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
      if (-1 < iVar7) {
        while( true ) {
          iVar5 = iVar7 + iVar8 >> 1;
          piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar5 * 8);
          if (*piVar1 == param_1[1]) break;
          if (param_1[1] < *piVar1) {
            iVar7 = iVar5 + -1;
          }
          else {
            iVar8 = iVar5 + 1;
          }
          if (iVar7 < iVar8) {
            return 0;
          }
        }
        if ((piVar1 != (int *)0x0) && (piVar1[1] == 7)) {
          switch(iVar4) {
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
            iVar4 = *param_2;
            break;
          default:
            iVar4 = -1;
          }
          if ((iVar4 == *(int *)(*(longlong *)(piVar1 + 0x44) + 4)) && (piVar1[8] <= param_2[6])) {
            if (param_2[6] != piVar1[8]) {
              return 1;
            }
            if (piVar1[9] <= param_2[7]) {
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
  case 5:
    bVar10 = param_2[9] == 4;
    bVar9 = param_2[9] == 5;
LAB_140ce7642:
    if (!bVar10 && !bVar9) {
      return 0;
    }
LAB_140ce7648:
    iVar4 = FUN_140273de0(param_2);
    iVar7 = FUN_140273de0(param_1);
    bVar10 = iVar7 == iVar4;
    goto LAB_140ce7b2c;
  case 9:
    if (param_2[9] == 0x11) {
      if ((param_2[1] == param_1[1]) && (*param_2 == param_1[2])) {
        return 1;
      }
      return 0;
    }
    break;
  case 0x10:
    if (param_2[9] == 0x10) {
      if (param_1[2] != param_2[2]) {
        return 0;
      }
      if (param_1[3] != param_2[3]) {
        return 0;
      }
      return 1;
    }
    break;
  case 0x11:
    if (param_2[9] == 9) {
      if (param_1[1] != param_2[1]) {
        return 0;
      }
      if (*param_1 != param_2[2]) {
        return 0;
      }
      return 1;
    }
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    iVar7 = -1;
    iVar8 = -1;
    iVar6 = -1;
    iVar5 = -1;
    switch(iVar4) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      iVar7 = *param_1;
      iVar8 = param_1[2];
    }
    switch(param_2[9] + -0x12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
      iVar5 = param_2[2];
      iVar6 = *param_2;
      break;
    case 4:
      iVar6 = *param_1;
      iVar5 = param_1[2];
    }
    if (iVar7 == -1) {
      return 0;
    }
    if (iVar6 == -1) {
      return 0;
    }
    if ((iVar7 == iVar6) && (iVar8 == iVar5)) {
      return 1;
    }
    if (iVar7 != iVar5) {
      return 0;
    }
    bVar10 = iVar8 == iVar6;
    goto LAB_140ce7b2c;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x21:
    iVar7 = param_2[9];
    if (iVar7 == 2) {
      iVar8 = 0;
      iVar7 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
      if (iVar7 < 0) {
        return 0;
      }
      while( true ) {
        iVar5 = iVar7 + iVar8 >> 1;
        piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar5 * 8);
        if (*piVar1 == param_2[1]) break;
        if (param_2[1] < *piVar1) {
          iVar7 = iVar5 + -1;
        }
        else {
          iVar8 = iVar5 + 1;
        }
        if (iVar7 < iVar8) {
          return 0;
        }
      }
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (piVar1[1] != 7) {
        return 0;
      }
      switch(iVar4) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        iVar4 = *param_1;
        break;
      default:
        iVar4 = -1;
      }
      if (iVar4 != *(int *)(*(longlong *)(piVar1 + 0x44) + 4)) {
        return 0;
      }
      if (piVar1[8] < param_1[6]) {
        return 0;
      }
      if (piVar1[8] == param_1[6]) {
        if (piVar1[9] < param_1[7]) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (8 < iVar7 - 0x19U) {
      return 0;
    }
    if (iVar4 - 0x19U < 9) {
      iVar8 = *param_1;
    }
    else {
      iVar8 = -1;
    }
    goto joined_r0x000140ce7b15;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    cVar3 = FUN_140051f80();
    if (cVar3 != '\0') {
      if (param_1[6] < param_2[6]) {
        return 1;
      }
      if ((param_1[6] == param_2[6]) && (param_1[7] < param_2[7])) {
        return 1;
      }
    }
    iVar7 = param_2[9];
    if (iVar7 == 2) {
      iVar8 = 0;
      iVar7 = (int)(DAT_141d691b0 - DAT_141d691a8 >> 3) + -1;
      if (iVar7 < 0) {
        return 0;
      }
      while( true ) {
        iVar5 = iVar7 + iVar8 >> 1;
        piVar1 = *(int **)(DAT_141d691a8 + (longlong)iVar5 * 8);
        if (*piVar1 == param_2[1]) break;
        if (param_2[1] < *piVar1) {
          iVar7 = iVar5 + -1;
        }
        else {
          iVar8 = iVar5 + 1;
        }
        if (iVar7 < iVar8) {
          return 0;
        }
      }
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (piVar1[1] != 7) {
        return 0;
      }
      switch(iVar4) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        iVar4 = *param_1;
        break;
      default:
        iVar4 = -1;
      }
      if (iVar4 != *(int *)(*(longlong *)(piVar1 + 0x44) + 4)) {
        return 0;
      }
      if (piVar1[8] < param_1[6]) {
        return 0;
      }
      if (piVar1[8] == param_1[6]) {
        if (piVar1[9] < param_1[7]) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if ((3 < iVar7 - 0x19U) && (iVar7 != 0x21)) {
      return 0;
    }
    iVar8 = -1;
    if (iVar4 - 0x19U < 9) {
      iVar8 = *param_1;
    }
joined_r0x000140ce7b15:
    iVar4 = -1;
    if (iVar7 - 0x19U < 9) {
      iVar4 = *param_2;
    }
    bVar10 = iVar8 == iVar4;
LAB_140ce7b2c:
    if (bVar10) {
      return 1;
    }
  }
  return 0;
}

