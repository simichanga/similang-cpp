; ModuleID = 'SimiLangModule'
source_filename = "SimiLangModule"

define i32 @main() {
entry:
  %x = alloca i32, align 4
  %x1 = alloca i32, align 4
  store i32 42, ptr %x1, align 4
  ret i32 0
}
