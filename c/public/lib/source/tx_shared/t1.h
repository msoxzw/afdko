"[-t1 options: defaults -0, -l, -E, -S, +T, +V, +q, -w, -e 4, -lf]\n"
"-0        host font type\n"
"-1        base incremental download font\n"
"-2        addition incremental download font\n"
"-b        binary encoding\n"
"-l        ASCII encoding\n"
"-c        ASCII85 encoding for incremental download font types\n"
"+/-E      add/remove WasEmbedded key\n"
"+/-S      ProcSet/Private OtherSubrs\n"
"+/-T      do/don't optimize font\n",
"+/-V      don't/do remove path overlaps\n"
"+/-q      retain/remove UniqueID keys in font\n"
"+/-w      enable/disable widths-only font\n"
"-Z        decompose SEAC and dotsection operators\n",
"-e arg    lenIV encryption, legal values: -1 (unencrypted), 0, 1, 4\n"
"-lf       Unix newline\n"
"-cr       Mac newline\n"
"-crlf     Windows newline\n"
"-decid    convert CID-keyed font to name-keyed font\n"
"-usefd fd force the result of -decid to use fd\n"
"-pfb      convert to Windows PFB format\n"
"-LWFN     convert to Macintosh LWFN resource format\n"
"-std      force the output font to have StandardEncoding\n"
"-n        remove hints\n"
"\n",
"Type 1 mode writes a Type 1 conversion of an abstract font. The form of the\n"
"Type 1 font is controlled by the options above.\n"
"\n",
"The -0 (host) option generates a font that closely follows the specification in\n"
"the \"Adobe Type 1 Font Format\" or the \"Adobe CMap and CIDFont Files\n"
"Specification\" depending on whether the source font was name- or CID-keyed,\n"
"respectively. The -1 (base) and -2 (addition) options generate a base or\n"
"addition type in incremental download format that is suitable for PostScript\n"
"printing. The +T (testing) option performs font and charstring optimizations\n",
"for incremental download fonts that are normally desirable but prevent bitmap\n"
"comparisons from being performed on some charstrings. These optimizations may\n"
"be disabled with the -T option.\n"
"\n"
"The -decid option converts a CID-keyed font into a name-keyed font. Since a\n"
"name-keyed font only provides a single Private dictionary, source glyphs must\n"
"be selected from a single dictionary in the FDArray. This means that you must\n"
"normally specify a glyph subset, e.g. by using the -fd option. This restriction\n",
"may be removed by forcing the choice of dictionary with the -usefd option. The\n"
"-usefd option should be used with care since it can have a detrimental effect\n"
"on hinting. A .notdef glyph will be added to the subset, if necessary. The\n"
"glyphs are given names of the form \"cidN\" where N is the decimal CID number of\n"
"the original glyph.\n"
"\n"
"The -pfb and -LWFN options imply the -0, +b, -E, -S, +q, -w, -e 4, and\n"
"-crlf or -cr options, respectively.\n"
"\n",
"The mutual exclusivity of options -b (binary), -l (long ASCII), and -c (compact\n"
"ASCII) is automatically, and silently, enforced. Option -c is only different\n"
"from option -l when options -1 or -2 are also specified.\n"
"\n"
"The other options are reasonably self explanatory.\n"
"\n"
"For example, the command:\n"
"\n"
"    tx -t1 -2 -g a -e -1 rdr_____.pfb\n"
"\n"
"converts the font file \"rdr_____.pfb\" to a Type 1 incremental download \n"
"addition font containing the single glyph \"a\" in an unencrypted and \n",
"ASCII-encoded form and writes the result to stdout.\n"
