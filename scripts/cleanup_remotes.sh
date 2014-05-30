#! /bin/sh

#
# Delete all local references to remote branches that do not match
# the string "/HEAD -> ", then fetch again from the remote.
#

BRANCHES="$(git branch -r | grep -E '[a-zA-Z]+/' | grep -v '/HEAD -> ')"

for b in $BRANCHES
do
  git branch -d -r "$b"
done

if test $# -lt 1 || test "x$1" != "xnofetch"
then
  git fetch --all
fi
