
#define PATCH_ORIGINAL_NEW_FILE_WITH_SPACE \
	"diff --git a/sp ace.txt b/sp ace.txt\n" \
	"new file mode 100644\n" \
	"index 000000000..789819226\n" \
	"--- /dev/null\n" \
	"+++ b/sp ace.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+a\n"

#define PATCH_CRLF \
	"diff --git a/test-file b/test-file\r\n" \
	"new file mode 100644\r\n" \
	"index 0000000..af431f2 100644\r\n" \
	"--- /dev/null\r\n" \
	"+++ b/test-file\r\n" \
	"@@ -0,0 +1 @@\r\n" \
	"+a contents\r\n"