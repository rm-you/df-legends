// FUN_140d20680 @ 140d20680
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 140d204a0 FUN_140d204a0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d20680(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_14000c780(&local_30,"inorganic",9);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"plant",5);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"creaturebody",0xc);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"creaturebodygloss",0x11);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"creature",8);
  FUN_140d204a0();
  FUN_14000c780(&local_30,&DAT_140e61ca0,4);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"entity",6);
  FUN_140d204a0();
  FUN_14000c780(&local_30,&DAT_140f8f7ec,4);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"symbol",6);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"translation",0xb);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"color",5);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"shape",5);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"color_pattern",0xd);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"reaction",8);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"material_template",0x11);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"tissue_template",0xf);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"body_detail_plan",0x10);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"building",8);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"creature_variation",0x12);
  FUN_140d204a0();
  FUN_14000c780(&local_30,"interaction",0xb);
  FUN_140d204a0();
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  return;
}

