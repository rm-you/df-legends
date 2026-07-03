// FUN_1402d2600 @ 1402d2600
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402d2600(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14000c110(param_1,"PLAYER_FORTRESS");
  if ((int)uVar2 != 0) {
    iVar1 = FUN_14000c110(param_1,"DARK_FORTRESS");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_14000c110(param_1,&DAT_140eb4140);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = FUN_14000c110(param_1,"CAVE_DETAILED");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = FUN_14000c110(param_1,"TREE_CITY");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_14000c110(param_1,&DAT_140eb4148);
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = FUN_14000c110(param_1,"FORTRESS");
              if (iVar1 == 0) {
                uVar2 = 8;
              }
              else {
                iVar1 = FUN_14000c110(param_1,"MONUMENT");
                if (iVar1 == 0) {
                  uVar2 = 10;
                }
                else {
                  local_18 = 0xf;
                  local_20 = 0;
                  local_30 = 0;
                  FUN_14000c780(&local_30,"Unrecognized Site Token: ",0x19);
                  FUN_14000cb40(&local_30,param_1,0,0xffffffffffffffff);
                  FUN_14014a240(&local_30);
                  if (0xf < local_18) {
                    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
                  }
                  uVar2 = 0xffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

