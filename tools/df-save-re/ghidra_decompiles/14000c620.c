// FUN_14000c620 @ 14000c620
// callees:


void FUN_14000c620(longlong *param_1,longlong param_2)

{
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)(*param_1 + param_2) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + param_2) = 0;
  return;
}

