
(cl:in-package :asdf)

(defsystem "advanced-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "first_actionAction" :depends-on ("_package_first_actionAction"))
    (:file "_package_first_actionAction" :depends-on ("_package"))
    (:file "first_actionActionFeedback" :depends-on ("_package_first_actionActionFeedback"))
    (:file "_package_first_actionActionFeedback" :depends-on ("_package"))
    (:file "first_actionActionGoal" :depends-on ("_package_first_actionActionGoal"))
    (:file "_package_first_actionActionGoal" :depends-on ("_package"))
    (:file "first_actionActionResult" :depends-on ("_package_first_actionActionResult"))
    (:file "_package_first_actionActionResult" :depends-on ("_package"))
    (:file "first_actionFeedback" :depends-on ("_package_first_actionFeedback"))
    (:file "_package_first_actionFeedback" :depends-on ("_package"))
    (:file "first_actionGoal" :depends-on ("_package_first_actionGoal"))
    (:file "_package_first_actionGoal" :depends-on ("_package"))
    (:file "first_actionResult" :depends-on ("_package_first_actionResult"))
    (:file "_package_first_actionResult" :depends-on ("_package"))
  ))