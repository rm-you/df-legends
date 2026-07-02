// FUN_1405bbec0 @ 1405bbec0
// callees:


void FUN_1405bbec0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x128) = 20000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined **)(param_1 + 0x120) = &DAT_1416acb50;
  *(undefined8 *)(param_1 + 0x140) = 80000;
  *(undefined **)(param_1 + 0x138) = &DAT_1416992d0;
                    /* WARNING: Could not recover jumptable at 0x0001405bbf0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + 8 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 4)),0,false);
  return;
}

