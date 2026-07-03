// FUN_1402c7f90 @ 1402c7f90
// callees:
//   -> 14000c780 FUN_14000c780


void FUN_1402c7f90(undefined8 param_1,undefined2 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  short sVar3;
  
  sVar3 = -1;
  uVar2 = 4;
  if (param_3 < 0x4b) {
    if (param_4 < 0x4b) {
      if (param_3 < 0x32) {
        if (param_4 < 0x32) {
          if ((param_3 < 0x19) || (param_4 < 0x19)) {
            if (param_3 < -0x4a) {
              if (param_4 < -0x4a) {
                sVar3 = 6;
              }
              else {
                sVar3 = 7;
              }
            }
            else if (param_4 < -0x4a) {
              sVar3 = 8;
            }
            else if (param_3 < -0x31) {
              sVar3 = 9;
            }
            else if (param_4 < -0x31) {
              sVar3 = 10;
            }
            else if ((param_3 < -0x18) && (param_4 < -0x18)) {
              sVar3 = 0xb;
            }
            else if (param_3 < 0x19) {
              if (param_4 < 0x19) {
                if (param_3 < -0x18) {
                  sVar3 = 0xe;
                }
                else if (param_4 < -0x18) {
                  sVar3 = 0xf;
                }
              }
              else {
                sVar3 = 0xd;
              }
            }
            else {
              sVar3 = 0xc;
            }
          }
          else {
            sVar3 = 5;
          }
        }
        else {
          sVar3 = 4;
        }
      }
      else {
        sVar3 = 3;
      }
    }
    else {
      sVar3 = 2;
    }
  }
  else if (param_4 < 0x4b) {
    sVar3 = 1;
  }
  else {
    sVar3 = 0;
  }
  switch(param_2) {
  case 0:
    uVar2 = 8;
    pcVar1 = "gigantic";
    break;
  case 1:
    uVar2 = 10;
    pcVar1 = "very large";
    break;
  case 2:
    if ((((sVar3 == 0) || (sVar3 == 5)) || (sVar3 == 6)) || (sVar3 == 0xb)) {
LAB_1402c81d1:
      uVar2 = 5;
      pcVar1 = "large";
    }
    else if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) {
LAB_1402c8127:
      uVar2 = 8;
      pcVar1 = "muscular";
    }
    else if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) {
LAB_1402c8149:
      uVar2 = 5;
      pcVar1 = "frail";
    }
    else if (sVar3 == 2) {
LAB_1402c816d:
      pcVar1 = "obese";
      uVar2 = 5;
    }
    else if (sVar3 == 4) {
LAB_1402c8182:
      pcVar1 = "fat";
      uVar2 = 3;
    }
    else {
      if (sVar3 != 0xd) {
        if (sVar3 == 8) goto LAB_1402c8642;
        if (sVar3 == 10) goto LAB_1402c8700;
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
        goto LAB_1402c81d1;
      }
LAB_1402c8198:
      pcVar1 = "chubby";
      uVar2 = 6;
    }
    break;
  case 3:
    if ((sVar3 == 0) || (sVar3 == 5)) {
LAB_1402c81e6:
      uVar2 = 3;
      pcVar1 = "big";
    }
    else {
      if ((sVar3 != 6) && (sVar3 != 0xb)) {
        if ((sVar3 == 1) || ((sVar3 == 3 || (sVar3 == 0xc)))) goto LAB_1402c8127;
        if ((sVar3 == 7) || ((sVar3 == 9 || (sVar3 == 0xe)))) goto LAB_1402c8149;
        if (sVar3 == 2) goto LAB_1402c816d;
        if (sVar3 == 4) goto LAB_1402c8182;
        if (sVar3 == 0xd) goto LAB_1402c8198;
        if (sVar3 == 8) goto LAB_1402c8642;
        if (sVar3 == 10) goto LAB_1402c8700;
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
      }
      uVar2 = 5;
      pcVar1 = "lanky";
    }
    break;
  case 4:
    if (((sVar3 != 0) && (sVar3 != 5)) && ((sVar3 != 6 && (sVar3 != 0xb)))) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
      if (sVar3 == 0xf) goto LAB_1402c87bb;
      if (sVar3 != -1) {
        return;
      }
    }
    uVar2 = 5;
    pcVar1 = "stout";
    break;
  case 5:
    if (((sVar3 != 0) && (sVar3 != 5)) && ((sVar3 != 6 && (sVar3 != 0xb)))) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
      if (sVar3 == 0xf) goto LAB_1402c87bb;
LAB_1402c8413:
      if (sVar3 != -1) {
        return;
      }
    }
LAB_1402c841e:
    uVar2 = 5;
    pcVar1 = "broad";
    break;
  case 6:
  case 7:
    if (((sVar3 == 0) || (sVar3 == 5)) || ((sVar3 == 6 || (sVar3 == 0xb)))) goto LAB_1402c841e;
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
    if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
    if (sVar3 == 2) goto LAB_1402c816d;
    if (sVar3 == 4) goto LAB_1402c8182;
    if (sVar3 == 0xd) goto LAB_1402c8198;
    if (sVar3 == 8) goto LAB_1402c8642;
    if (sVar3 == 10) goto LAB_1402c8700;
    if (sVar3 != 0xf) goto LAB_1402c8413;
    pcVar1 = "slim";
    break;
  case 8:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
      if (sVar3 == 0xf) goto LAB_1402c87bb;
      if (sVar3 != -1) {
        return;
      }
    }
    uVar2 = 6;
    pcVar1 = "narrow";
    break;
  case 9:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 != 8) {
        if (sVar3 == 10) goto LAB_1402c8700;
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
      }
    }
LAB_1402c8642:
    pcVar1 = "skinny";
    uVar2 = 6;
    break;
  case 10:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 != 10) {
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
      }
    }
LAB_1402c8700:
    pcVar1 = "thin";
    break;
  case 0xb:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
      if ((sVar3 != 0xf) && (sVar3 != -1)) {
        return;
      }
    }
LAB_1402c87bb:
    pcVar1 = "slim";
    break;
  case 0xc:
    if ((sVar3 == 0) || (sVar3 == 5)) {
      uVar2 = 8;
      pcVar1 = "towering";
    }
    else {
      if ((sVar3 != 6) && (sVar3 != 0xb)) {
        if ((sVar3 == 1) || ((sVar3 == 3 || (sVar3 == 0xc)))) goto LAB_1402c8127;
        if ((sVar3 == 7) || ((sVar3 == 9 || (sVar3 == 0xe)))) goto LAB_1402c8149;
        if (sVar3 == 2) goto LAB_1402c816d;
        if (sVar3 == 4) goto LAB_1402c8182;
        if (sVar3 == 0xd) goto LAB_1402c8198;
        if (sVar3 == 8) goto LAB_1402c8642;
        if (sVar3 == 10) goto LAB_1402c8700;
LAB_1402c886b:
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
      }
LAB_1402c8881:
      pcVar1 = "tall";
    }
    break;
  case 0xd:
  case 0xe:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 == 6) || (sVar3 == 0xb)) goto LAB_1402c8881;
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
    if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
    if (sVar3 == 2) goto LAB_1402c816d;
    if (sVar3 == 4) goto LAB_1402c8182;
    if (sVar3 == 0xd) goto LAB_1402c8198;
    if (sVar3 == 8) goto LAB_1402c8642;
    if (sVar3 != 10) goto LAB_1402c886b;
    pcVar1 = "thin";
    break;
  case 0xf:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
LAB_1402c89cb:
      if (sVar3 == 0xf) goto LAB_1402c87bb;
      if (sVar3 != -1) {
        return;
      }
    }
LAB_1402c89e1:
    pcVar1 = "long";
    break;
  case 0x10:
  case 0x11:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if ((sVar3 == 6) || (sVar3 == 0xb)) goto LAB_1402c89e1;
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
    if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
    if (sVar3 == 2) goto LAB_1402c816d;
    if (sVar3 == 4) goto LAB_1402c8182;
    if (sVar3 == 0xd) goto LAB_1402c8198;
    if (sVar3 == 8) goto LAB_1402c8642;
    if (sVar3 != 10) goto LAB_1402c89cb;
    pcVar1 = "thin";
    break;
  case 0x12:
    if ((sVar3 == 0) || (sVar3 == 5)) {
LAB_1402c8a94:
      uVar2 = 5;
      pcVar1 = "squat";
    }
    else {
      if ((sVar3 != 6) && (sVar3 != 0xb)) {
        if ((sVar3 == 1) || ((sVar3 == 3 || (sVar3 == 0xc)))) goto LAB_1402c8127;
        if ((sVar3 == 7) || ((sVar3 == 9 || (sVar3 == 0xe)))) goto LAB_1402c8149;
        if (sVar3 == 2) goto LAB_1402c816d;
        if (sVar3 == 4) goto LAB_1402c8182;
        if (sVar3 == 0xd) goto LAB_1402c8198;
        if (sVar3 == 8) goto LAB_1402c8642;
        if (sVar3 == 10) goto LAB_1402c8700;
LAB_1402c8b32:
        if (sVar3 == 0xf) goto LAB_1402c87bb;
        if (sVar3 != -1) {
          return;
        }
      }
LAB_1402c8b48:
      uVar2 = 5;
      pcVar1 = "short";
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c8a94;
    if ((sVar3 == 6) || (sVar3 == 0xb)) goto LAB_1402c8b48;
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
    if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
    if (sVar3 == 2) goto LAB_1402c816d;
    if (sVar3 == 4) goto LAB_1402c8182;
    if (sVar3 == 0xd) goto LAB_1402c8198;
    if (sVar3 == 8) goto LAB_1402c8642;
    if (sVar3 != 10) goto LAB_1402c8b32;
    pcVar1 = "thin";
    break;
  case 0x18:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c81e6;
    if (sVar3 != 6) {
      if (sVar3 != 0xb) {
        if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
        if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
        if (sVar3 == 2) goto LAB_1402c816d;
        if (sVar3 == 4) goto LAB_1402c8182;
        if (sVar3 == 0xd) goto LAB_1402c8198;
        if (sVar3 != 8) {
          if (sVar3 == 10) goto LAB_1402c8700;
          if (sVar3 != 0xf) {
            return;
          }
          pcVar1 = "slim";
          break;
        }
      }
      goto LAB_1402c8642;
    }
    uVar2 = 7;
    pcVar1 = "scrawny";
    break;
  case 0x19:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c8a94;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
LAB_1402c8d54:
      if (sVar3 == 0xf) goto LAB_1402c87bb;
      if (sVar3 != -1) {
        return;
      }
    }
LAB_1402c8d6a:
    uVar2 = 5;
    pcVar1 = "small";
    break;
  case 0x1a:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c8a94;
    if ((sVar3 == 6) || (sVar3 == 0xb)) goto LAB_1402c8d6a;
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
    if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
    if (sVar3 == 2) goto LAB_1402c816d;
    if (sVar3 == 4) goto LAB_1402c8182;
    if (sVar3 == 0xd) goto LAB_1402c8198;
    if (sVar3 == 8) goto LAB_1402c8642;
    if (sVar3 != 10) goto LAB_1402c8d54;
    pcVar1 = "thin";
    break;
  case 0x1b:
    if ((sVar3 == 0) || (sVar3 == 5)) goto LAB_1402c8a94;
    if ((sVar3 != 6) && (sVar3 != 0xb)) {
      if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 0xc)) goto LAB_1402c8127;
      if (((sVar3 == 7) || (sVar3 == 9)) || (sVar3 == 0xe)) goto LAB_1402c8149;
      if (sVar3 == 2) goto LAB_1402c816d;
      if (sVar3 == 4) goto LAB_1402c8182;
      if (sVar3 == 0xd) goto LAB_1402c8198;
      if (sVar3 == 8) goto LAB_1402c8642;
      if (sVar3 == 10) goto LAB_1402c8700;
      if (sVar3 == 0xf) goto LAB_1402c87bb;
      if (sVar3 != -1) {
        return;
      }
    }
    pcVar1 = "tiny";
    break;
  default:
    goto switchD_1402c80d7_default;
  }
  FUN_14000c780(param_1,pcVar1,uVar2);
switchD_1402c80d7_default:
  return;
}

