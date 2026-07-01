// FUN_14060a760 @ 14060a760
// callees:
//   -> 140dfb5c4 operator_new
//   -> 1407ccfa0 FUN_1407ccfa0


undefined8 * FUN_14060a760(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  *puVar1 = viewscreen_game_cleanerst::vftable;
  *(undefined4 *)(puVar1 + 4) = param_1;
  FUN_1407ccfa0();
  return puVar1;
}

