# Chemeketa CS Department Website & Resources

Built with Hugo:

https://gohugo.io/documentation/

Theme is a fork of Academic. Forked copy has a few minor bugfixes and sets a default theme for mermaid diagrams.

https://github.com/gcushen/hugo-academic

https://github.com/ChemeketaCS/hugo-academic

## Install

Install Hugo: https://gohugo.io/getting-started/installing/

Clone repository using ``--recurse-submodules`` or clone and then do:

    git submodule init
    git submodule update

## Building and deployment

For development do:

    hugo server

Any changes pushed to the github repository will cause a webhook to make a call to the CS server
and trigger a rebuild on it. The webhook server is started from ``/etc/supervisor/conf.d/webhook.conf``.
nginx redirects ``hooks/`` traffic to it. Hook itself is configured in **hooks.json** and calls **redeploy.sh**.

## Development tips

Style guidelines:

* 2 space indents
* Line limit ~100 chars.

**content** is where to make new items.

* **advising** and **authors** (People) are publicly navigable
* **assignments** and **courses** are published to the web, but not linked via public parts of the site
* **guides** is a work in progress - may become publicly navigable

Layout/style changes are done in **assets** (for scss files), and **layouts**
for HTML/md templates.

Change the theme in **themes** only when the change is something that might be shared back to the
Academic developer, or when the file in question is not something that can be overridden
by the Hugo build system (i.e. it is a JS file).
