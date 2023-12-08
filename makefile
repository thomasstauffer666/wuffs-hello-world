
setget: setget.c setget-wuffs.c
	gcc setget.c -o setget

setget-wuffs.c: setget.wuffs
	wuffs-c gen -package_name demo < setget.wuffs > setget-wuffs.c

format:
	wuffsfmt -w setget.wuffs

clean:
	rm -f setget setget-wuffs.c
