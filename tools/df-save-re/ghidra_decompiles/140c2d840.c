// FUN_140c2d840 @ 140c2d840
// callees:
//   -> 1402cdb40 FUN_1402cdb40
//   -> 1402cdbf0 FUN_1402cdbf0
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1400b9c40 FUN_1400b9c40
//   -> 14014b430 FUN_14014b430


void FUN_140c2d840(char *param_1,undefined8 param_2,ushort param_3,short param_4,undefined1 *param_5
                  ,short param_6,char param_7,char param_8)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  if (0x86 < param_3) {
    return;
  }
  bVar2 = true;
  *param_5 = 0;
  cVar3 = FUN_1402cdb40(&DAT_141d6dd30,param_4,param_6,param_3);
  if (cVar3 != '\0') {
    FUN_1402cdbf0(&DAT_141d6dd30,param_1,param_4,param_6,CONCAT22(uVar8,param_3),param_7,param_8);
    return;
  }
  pcVar5 = param_1;
  switch(param_3) {
  case 0:
    FUN_14000c780(param_1,"miner",5);
    break;
  case 1:
    FUN_14000c780(param_1,"woodworker",10);
    break;
  case 2:
    FUN_14000c780(param_1,"carpenter",9);
    break;
  case 3:
    FUN_14000c780(param_1,"bowyer",6);
    break;
  case 4:
    FUN_14000c780(param_1,"woodcutter",10);
    break;
  case 5:
    FUN_14000c780(param_1,"stoneworker",0xb);
    break;
  case 6:
    FUN_14000c780(param_1,"engraver",8);
    break;
  case 7:
    FUN_14000c780(param_1,"mason",5);
    break;
  case 8:
    FUN_14000c780(param_1,"ranger",6);
    break;
  case 9:
    FUN_14000c780(param_1,"animal caretaker",0x10);
    break;
  case 10:
    FUN_14000c780(param_1,"animal trainer",0xe);
    break;
  case 0xb:
    FUN_14000c780(param_1,"hunter",6);
    break;
  case 0xc:
    FUN_14000c780(param_1,"trapper",7);
    break;
  case 0xd:
    FUN_14000c780(param_1,"animal dissector",0x10);
    break;
  case 0xe:
    FUN_14000c780(param_1,"metalsmith",10);
    break;
  case 0xf:
    FUN_14000c780(param_1,"furnace operator",0x10);
    break;
  case 0x10:
    FUN_14000c780(param_1,"weaponsmith",0xb);
    break;
  case 0x11:
    FUN_14000c780(param_1,"armorer",7);
    break;
  case 0x12:
    FUN_14000c780(param_1,"blacksmith",10);
    break;
  case 0x13:
    FUN_14000c780(param_1,"metalcrafter",0xc);
    break;
  case 0x14:
    FUN_14000c780(param_1,"jeweler",7);
    break;
  case 0x15:
    FUN_14000c780(param_1,"gem cutter",10);
    break;
  case 0x16:
    FUN_14000c780(param_1,"gem setter",10);
    break;
  case 0x17:
    FUN_14000c780(param_1,"craftsman",9);
    break;
  case 0x18:
    FUN_14000c780(param_1,"woodcrafter",0xb);
    break;
  case 0x19:
    FUN_14000c780(param_1,"stonecrafter",0xc);
    break;
  case 0x1a:
    FUN_14000c780(param_1,"leatherworker",0xd);
    break;
  case 0x1b:
    FUN_14000c780(param_1,"bone carver",0xb);
    break;
  case 0x1c:
    FUN_14000c780(param_1,"weaver",6);
    break;
  case 0x1d:
    FUN_14000c780(param_1,"clothier",8);
    break;
  case 0x1e:
    FUN_14000c780(param_1,"glassmaker",10);
    break;
  case 0x1f:
    FUN_14000c780(param_1,"potter",6);
    break;
  case 0x20:
    FUN_14000c780(param_1,"glazer",6);
    break;
  case 0x21:
    FUN_14000c780(param_1,"wax worker",10);
    break;
  case 0x22:
    FUN_14000c9f0(param_1,"strand extractor",0x10);
    break;
  case 0x23:
    FUN_14000c780(param_1,"fishery worker",0xe);
    break;
  case 0x24:
    FUN_14000c780(param_1,"fisherman",9);
    break;
  case 0x25:
    FUN_14000c780(param_1,"fish dissector",0xe);
    break;
  case 0x26:
    FUN_14000c780(param_1,"fish cleaner",0xc);
    break;
  case 0x27:
    FUN_14000c780(param_1,"farmer",6);
    break;
  case 0x28:
    FUN_14000c780(param_1,"cheese maker",0xc);
    break;
  case 0x29:
    FUN_14000c780(param_1,"milker",6);
    break;
  case 0x2a:
    FUN_14000c780(param_1,&DAT_140f8ad50,4);
    break;
  case 0x2b:
    FUN_14000c780(param_1,"thresher",8);
    break;
  case 0x2c:
    FUN_14000c780(param_1,"miller",6);
    break;
  case 0x2d:
    FUN_14000c780(param_1,"butcher",7);
    break;
  case 0x2e:
    FUN_14000c780(param_1,"tanner",6);
    break;
  case 0x2f:
    FUN_14000c780(param_1,&DAT_140f8ad30,4);
    break;
  case 0x30:
    FUN_14000c780(param_1,"planter",7);
    break;
  case 0x31:
    FUN_14000c780(param_1,"herbalist",9);
    break;
  case 0x32:
    FUN_14000c780(param_1,"brewer",6);
    break;
  case 0x33:
    FUN_14000c780(param_1,"soap maker",10);
    break;
  case 0x34:
    FUN_14000c780(param_1,"potash maker",0xc);
    break;
  case 0x35:
    FUN_14000c780(param_1,"lye maker",9);
    break;
  case 0x36:
    FUN_14000c780(param_1,"wood burner",0xb);
    break;
  case 0x37:
    FUN_14000c780(param_1,"shearer",7);
    break;
  case 0x38:
    FUN_14000c780(param_1,"spinner",7);
    break;
  case 0x39:
    FUN_14000c780(param_1,"presser",7);
    break;
  case 0x3a:
    FUN_14000c780(param_1,"beekeeper",9);
    break;
  case 0x3b:
    FUN_14000c780(param_1,"engineer",8);
    break;
  case 0x3c:
    FUN_14000c780(param_1,"mechanic",8);
    break;
  case 0x3d:
    FUN_14000c780(param_1,"siege engineer",0xe);
    break;
  case 0x3e:
    FUN_14000c780(param_1,"siege operator",0xe);
    break;
  case 0x3f:
    FUN_14000c780(param_1,"pump operator",0xd);
    break;
  case 0x40:
    FUN_14000c780(param_1,"clerk",5);
    break;
  case 0x41:
    FUN_14000c780(param_1,"administrator",0xd);
    break;
  case 0x42:
    FUN_14000c780(param_1,"trader",6);
    break;
  case 0x43:
    FUN_14000c780(param_1,"architect",9);
    break;
  case 0x44:
    FUN_14000c780(param_1,"alchemist",9);
    break;
  case 0x45:
    FUN_14000c780(param_1,"doctor",6);
    break;
  case 0x46:
    FUN_14000c780(param_1,"diagnoser",9);
    break;
  case 0x47:
    FUN_14000c780(param_1,"bone doctor",0xb);
    break;
  case 0x48:
    FUN_14000c780(param_1,"suturer",7);
    break;
  case 0x49:
    FUN_14000c780(param_1,"surgeon",7);
    break;
  case 0x4a:
    FUN_14000c780(param_1,"merchant",8);
    break;
  case 0x4b:
    FUN_14000c780(param_1,"hammerman",9);
    break;
  case 0x4c:
    FUN_14000c780(param_1,"Hammer Lord",0xb);
    break;
  case 0x4d:
    FUN_14000c780(param_1,"spearman",8);
    break;
  case 0x4e:
    FUN_14000c780(param_1,"Spearmaster",0xb);
    break;
  case 0x4f:
    FUN_14000c780(param_1,"crossbowman",0xb);
    break;
  case 0x50:
    FUN_14000c780(param_1,"Elite Crossbowman",0x11);
    break;
  case 0x51:
    FUN_14000c780(param_1,"wrestler",8);
    break;
  case 0x52:
    FUN_14000c780(param_1,"Elite Wrestler",0xe);
    break;
  case 0x53:
    FUN_14000c780(param_1,"axeman",6);
    break;
  case 0x54:
    FUN_14000c780(param_1,"Axe Lord",8);
    break;
  case 0x55:
    FUN_14000c780(param_1,"swordsman",9);
    break;
  case 0x56:
    FUN_14000c780(param_1,"Swordmaster",0xb);
    break;
  case 0x57:
    FUN_14000c780(param_1,"maceman",7);
    break;
  case 0x58:
    FUN_14000c780(param_1,"Mace Lord",9);
    break;
  case 0x59:
    FUN_14000c780(param_1,"pikeman",7);
    break;
  case 0x5a:
    FUN_14000c780(param_1,"Pikemaster",10);
    break;
  case 0x5b:
    FUN_14000c780(param_1,"bowman",6);
    break;
  case 0x5c:
    FUN_14000c780(param_1,"Elite Bowman",0xc);
    break;
  case 0x5d:
    FUN_14000c780(param_1,"blowgunner",10);
    break;
  case 0x5e:
    FUN_14000c780(param_1,"Master Blowgunner",0x11);
    break;
  case 0x5f:
    FUN_14000c780(param_1,"lasher",6);
    break;
  case 0x60:
    FUN_14000c780(param_1,"Master Lasher",0xd);
    break;
  case 0x61:
    FUN_14000c780(param_1,"recruit",7);
    break;
  case 0x62:
    FUN_14000c780(param_2,"hunting",7);
    break;
  case 99:
    FUN_14000c780(param_2,&DAT_140e79dd0,3);
    break;
  case 100:
    FUN_14000c780(param_1,"Master Thief",0xc);
    break;
  case 0x65:
    FUN_14000c780(param_1,"thief",5);
    break;
  case 0x67:
    if (param_6 != -1) {
      if (-1 < param_4) {
        uVar6 = (ulonglong)param_4;
        uVar4 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
        if (uVar6 < uVar4) {
          if (-1 < param_6) {
            lVar1 = *(longlong *)(DAT_141d6dd50 + uVar6 * 8);
            if (((ulonglong)(longlong)param_6 <
                 (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_6 * 8) + 0x110) != 0)
               ) {
              if (param_7 == '\0') {
                FUN_1400b9c40(&DAT_141d6dd30,param_1,param_4,param_6,8,param_8);
                *param_5 = 1;
              }
              else {
                FUN_1400b9c40(&DAT_141d6dd30,param_1,param_4,param_6,9,param_8);
                *param_5 = 1;
              }
              goto LAB_140c2eaa1;
            }
          }
          if ((uVar6 < uVar4) &&
             (lVar1 = *(longlong *)(DAT_141d6dd50 + uVar6 * 8), *(longlong *)(lVar1 + 0xd0) != 0)) {
            if (param_7 == '\0') {
              if (param_1 != (char *)(lVar1 + 0xc0)) {
                FUN_14000c8b0(param_1,(char *)(lVar1 + 0xc0),0,0xffffffffffffffff);
              }
              if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
                uVar4 = *(ulonglong *)(param_1 + 0x18);
                if (0xf < uVar4) {
                  pcVar5 = *(char **)param_1;
                }
                goto LAB_140c2e997;
              }
            }
            else {
              if (param_1 != (char *)(lVar1 + 0xe0)) {
                FUN_14000c8b0(param_1,(char *)(lVar1 + 0xe0),0,0xffffffffffffffff);
              }
              if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
                uVar4 = *(ulonglong *)(param_1 + 0x18);
                if (0xf < uVar4) {
                  pcVar5 = *(char **)param_1;
                }
                goto LAB_140c2e997;
              }
            }
            goto LAB_140c2e9ca;
          }
        }
      }
LAB_140c2e75a:
      if (param_7 == '\0') {
        pcVar5 = "child";
        uVar7 = 5;
      }
      else {
        uVar7 = 8;
        pcVar5 = "children";
      }
      goto LAB_140c2ea9c;
    }
    if (((param_4 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)param_4)) ||
       (lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_4 * 8),
       *(longlong *)(lVar1 + 0xd0) == 0)) goto LAB_140c2e75a;
    if (param_7 == '\0') {
      if (param_1 != (char *)(lVar1 + 0xc0)) {
        FUN_14000c8b0(param_1,(char *)(lVar1 + 0xc0),0,0xffffffffffffffff);
      }
      if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
        uVar4 = *(ulonglong *)(param_1 + 0x18);
        if (0xf < uVar4) {
          pcVar5 = *(char **)param_1;
        }
        goto LAB_140c2e997;
      }
    }
    else {
      if (param_1 != (char *)(lVar1 + 0xe0)) {
        FUN_14000c8b0(param_1,(char *)(lVar1 + 0xe0),0,0xffffffffffffffff);
      }
      if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
        uVar4 = *(ulonglong *)(param_1 + 0x18);
        if (0xf < uVar4) {
          pcVar5 = *(char **)param_1;
        }
LAB_140c2e997:
        if ('`' < *pcVar5) {
          pcVar5 = param_1;
          if (0xf < uVar4) {
            pcVar5 = *(char **)param_1;
          }
          if (*pcVar5 < '{') {
            if (0xf < uVar4) {
              **(char **)param_1 = **(char **)param_1 + -0x20;
              *param_5 = 1;
              goto LAB_140c2eaa1;
            }
            *param_1 = *param_1 + -0x20;
          }
        }
      }
    }
LAB_140c2e9ca:
    *param_5 = 1;
    goto LAB_140c2eaa1;
  case 0x68:
    if (param_6 == -1) {
      if (((-1 < param_4) &&
          ((ulonglong)(longlong)param_4 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
         (lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_4 * 8),
         *(longlong *)(lVar1 + 0x90) != 0)) {
        if (param_7 == '\0') {
          if (param_1 != (char *)(lVar1 + 0x80)) {
            FUN_14000c8b0(param_1,(char *)(lVar1 + 0x80),0,0xffffffffffffffff);
          }
          if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
            uVar4 = *(ulonglong *)(param_1 + 0x18);
            if (0xf < uVar4) {
              pcVar5 = *(char **)param_1;
            }
            goto LAB_140c2e997;
          }
        }
        else {
          if (param_1 != (char *)(lVar1 + 0xa0)) {
            FUN_14000c8b0(param_1,(char *)(lVar1 + 0xa0),0,0xffffffffffffffff);
          }
          if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
            uVar4 = *(ulonglong *)(param_1 + 0x18);
            if (0xf < uVar4) {
              pcVar5 = *(char **)param_1;
            }
            goto LAB_140c2e997;
          }
        }
        goto LAB_140c2e9ca;
      }
    }
    else if (((-1 < param_4) &&
             ((ulonglong)(longlong)param_4 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
            (-1 < param_6)) {
      lVar1 = *(longlong *)(DAT_141d6dd50 + (longlong)param_4 * 8);
      if (((ulonglong)(longlong)param_6 <
           (ulonglong)(*(longlong *)(lVar1 + 0x180) - *(longlong *)(lVar1 + 0x178) >> 3)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x178) + (longlong)param_6 * 8) + 0xd0)
          != 0)) {
        if (param_7 == '\0') {
          FUN_1400b9c40(&DAT_141d6dd30,param_1,param_4,param_6,6,param_8);
          *param_5 = 1;
        }
        else {
          FUN_1400b9c40(&DAT_141d6dd30,param_1,param_4,param_6,7,param_8);
          *param_5 = 1;
        }
        goto LAB_140c2eaa1;
      }
    }
    if (param_7 == '\0') {
      pcVar5 = "baby";
      uVar7 = 4;
    }
    else {
      uVar7 = 6;
      pcVar5 = "babies";
    }
LAB_140c2ea9c:
    FUN_14000c780(param_1,pcVar5,uVar7);
LAB_140c2eaa1:
    bVar2 = false;
    break;
  case 0x69:
    FUN_14000c780(param_1,"drunk",5);
    break;
  case 0x6a:
    FUN_14000c780(param_1,"monster slayer",0xe);
    break;
  case 0x6b:
    FUN_14000c780(param_1,"scout",5);
    break;
  case 0x6c:
    FUN_14000c780(param_1,"beast hunter",0xc);
    break;
  case 0x6d:
    FUN_14000c780(param_1,"snatcher",8);
    break;
  case 0x6e:
    FUN_14000c780(param_1,"mercenary",9);
    break;
  case 0x6f:
    FUN_14000c780(param_1,"gelder",6);
    break;
  case 0x70:
    FUN_14000c780(param_1,"performer",9);
    break;
  case 0x71:
    FUN_14000c780(param_1,&DAT_140ebd4ac,4);
    break;
  case 0x72:
    FUN_14000c780(param_1,&DAT_140ebd48c,4);
    break;
  case 0x73:
    FUN_14000c780(param_1,"dancer",6);
    break;
  case 0x74:
    FUN_14000c780(param_1,&DAT_140f8b040,4);
    break;
  case 0x75:
    FUN_14000c780(param_1,"scholar",7);
    break;
  case 0x76:
    FUN_14000c780(param_1,"philosopher",0xb);
    break;
  case 0x77:
    FUN_14000c780(param_1,"mathematician",0xd);
    break;
  case 0x78:
    FUN_14000c780(param_1,"historian",9);
    break;
  case 0x79:
    FUN_14000c780(param_1,"astronomer",10);
    break;
  case 0x7a:
    FUN_14000c780(param_1,"naturalist",10);
    break;
  case 0x7b:
    FUN_14000c780(param_1,"chemist",7);
    break;
  case 0x7c:
    FUN_14000c780(param_1,"geographer",10);
    break;
  case 0x7d:
    FUN_14000c780(param_1,"scribe",6);
    break;
  case 0x7e:
    FUN_14000c780(param_1,"papermaker",10);
    break;
  case 0x7f:
    FUN_14000c780(param_1,"bookbinder",10);
    break;
  case 0x80:
    FUN_14000c780(param_1,"tavern keeper",0xd);
    break;
  case 0x81:
    FUN_14000c780(param_1,"criminal",8);
    break;
  case 0x82:
    FUN_14000c780(param_1,"peddler",7);
    break;
  case 0x83:
    FUN_14000c780(param_1,"prophet",7);
    break;
  case 0x84:
    FUN_14000c780(param_1,"pilgrim",7);
    break;
  case 0x85:
    FUN_14000c780(param_1,&DAT_140f8b128,4);
    break;
  case 0x86:
    FUN_14000c780(param_1,"messenger",9);
  }
  if ((param_7 != '\0') && (bVar2)) {
    FUN_14000c9f0(param_1,&DAT_140e5a3c0,1);
  }
  if (param_8 != '\0') {
    FUN_14014b430(param_1);
  }
  return;
}

