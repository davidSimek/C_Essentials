# Bug-Catcher
```
-fstack-protector-strong \ # Enable stack protection to guard against stack buffer overflows
-fstack-clash-protection \ # Enable stack clash protection to prevent stack smashing
-Wl,-z,relro \             # Enable RELRO (Read-Only Relocations)
-Wl,-z,now \               # Enable immediate binding of shared libraries to avoid runtime relocation attacks
-pie \                     # Produce position-independent executable (PIE) for better security
```
